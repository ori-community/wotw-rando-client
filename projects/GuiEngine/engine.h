#pragma once

#pragma warning(push, 0)
#include <SDL2/SDL.h>
#pragma warning(pop)
#include <GuiEngine/gui/imgui.h>

#include <string>
#include <vector>

namespace gui_engine {

    struct GuiData
    {
        GuiData()
            : running(true)
            , title()
            , window_size{ 1280.f, 720.f }
            , extra(nullptr)
        {}

        bool running;
        std::string title;
        ImVec2 window_size;
        void* extra;
    };

    using init_callback = void (*)(GuiData& gui);
    using event_callback = void (*)(GuiData& gui, SDL_Event const& evt);
    using tick_callback = void (*)(GuiData& gui);
    using render_callback = void (*)(GuiData& gui);

    int start_loop(GuiData& data, init_callback init, event_callback handle_event, tick_callback tick, render_callback render);
}
