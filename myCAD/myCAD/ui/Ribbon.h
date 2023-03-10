#pragma once

#include "../elems/light.h"
#include "../ui/scene_view.h"

#include "imgui.h"
#include "../utils/imgui_widgets.h"
#include "../Im/ImFileBrowser.h"
#include "../user_tools/tools.h"

namespace nui
{
    class Ribbon
    {
    public:

        Ribbon() :
         mtools(nullptr)
        {
            //std::cout << "Initializing Ribbon";
            mtools = std::make_unique<ntools::Tools>();
        }

        void render(nui::SceneView* mScene);

        //"Main" ribbon state 
        void State01();
        //3D Assembly file ribbon state
        void State02();
        //2D Part file ribbon state
        void State03();
        //2D Drawing file ribbon state
        void State04();
        //2D Line file ribbon state
        void State05();

        int ribbon_state = 0b0000;

    private:
        // 
        std::unique_ptr<ntools::Tools> mtools;
        
    };
}