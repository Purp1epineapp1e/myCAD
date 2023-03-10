#include "../pch.h"
#include "Ribbon.h"

namespace nui
{
    void Ribbon::render(nui::SceneView* scene_view)
    {
        auto mesh = scene_view->get_mesh();
        if (mesh == nullptr) 
        {
            ribbon_state = 0b0001;
        }
        else 
        {
            ribbon_state = mesh->get_state();
        }

        switch(ribbon_state)
        {
        case 0b0001:
            State01();
            break;
        case 0b0010:
            State02();
            break;
        case 0b0011:
            State03();
            break;
        case 0b0100:
            State04();
            break;
        case 0b0101:
            State05();
            break;
        default:
            break;
        }
        
    }

    void Ribbon::State01() 
    {

        ImGui::Begin("Ribbon");
        // Create the tab bar
        if (ImGui::BeginTabBar("My Tab Bar"))
        {
            // Create the first tab
            if (ImGui::BeginTabItem("FILE"))
            {
                ImGui::BeginChild("Tab1 1 Child", ImVec2(0, 0), true);

                // Add the button
                if (ImGui::Button("State01"))
                {
                    mtools->sketch();
                }

                ImGui::EndChild();
                ImGui::EndTabItem();
            }

            // Create the second tab
            if (ImGui::BeginTabItem("MODEL"))
            {
                ImGui::Text("This is tab 2!");
                ImGui::EndTabItem();
            }

            // End the tab bar
            ImGui::EndTabBar();
        }

        ImGui::End();
    }

    void Ribbon::State02() 
    {

    }

    void Ribbon::State03()
    {
        ImGui::Begin("Ribbon");
        // Create the tab bar
        if (ImGui::BeginTabBar("My Tab Bar"))
        {
            // Create the first tab
            if (ImGui::BeginTabItem("FILE"))
            {
                ImGui::BeginChild("Tab1 1 Child", ImVec2(0, 0), true);

                // Add the button
                if (ImGui::Button("State03"))
                {
                    mtools->sketch();
                }

                ImGui::EndChild();
                ImGui::EndTabItem();
            }

            // Create the second tab
            if (ImGui::BeginTabItem("MODEL"))
            {
                ImGui::Text("This is tab 2!");
                ImGui::EndTabItem();
            }

            // End the tab bar
            ImGui::EndTabBar();
        }

        ImGui::End();
    }

    void Ribbon::State04()
    {

    }

    void Ribbon::State05()
    {

    }
}