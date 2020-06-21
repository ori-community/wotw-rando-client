#include <build.h>
#if !USE_VULKAN

#include <engine.h>
#include <SDL2/SDL_opengl.h>
#include <gui/implementation/imgui_impl_sdl.h>
#include <gui/implementation/imgui_impl_opengl2.h>

namespace gui_engine {


    int start_loop(GuiData& gui, init_callback init, event_callback handle_event, tick_callback tick, render_callback render)
    {
        if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMECONTROLLER) != 0)
        {
            printf("Error: %s\n", SDL_GetError());
            return -1;
        }

        SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
        SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
        SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
        uint32_t window_flags = static_cast<uint32_t>(
            SDL_WindowFlags::SDL_WINDOW_OPENGL |
            SDL_WindowFlags::SDL_WINDOW_RESIZABLE |
            SDL_WindowFlags::SDL_WINDOW_ALLOW_HIGHDPI
            );

        SDL_Window* window = SDL_CreateWindow(
            gui.title.c_str(),
            SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED,
            static_cast<int>(gui.window_size.x),
            static_cast<int>(gui.window_size.y),
            window_flags
        );

        SDL_SetWindowMinimumSize(window, 720, 405);

        SDL_GLContext gl_context = SDL_GL_CreateContext(window);
        SDL_GL_MakeCurrent(window, gl_context);
        SDL_GL_SetSwapInterval(1); // VSync

        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO& io = ImGui::GetIO();
        //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard; // Enable Keyboard Controls
        //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad; // Enable Gamepad Controls

        io.IniFilename = nullptr;
        ImGui::StyleColorsDark();

        ImGui_ImplSDL2_InitForOpenGL(window, gl_context);
        ImGui_ImplOpenGL2_Init();

        io.Fonts->AddFontDefault();

        bool show_another_window = false;
        ImVec4 clear_color = { 0.45f, 0.55f, 0.60f, 1.00f };
        gui.last_time = std::chrono::system_clock::now();

        init(gui);

        while (gui.running)
        {
            using dtf = std::chrono::duration<float>;
            auto time = std::chrono::high_resolution_clock::now();
            dtf delta_time = time - gui.last_time;
            gui.delta_time = delta_time.count();
            io.DeltaTime = gui.delta_time;

            SDL_Event evt;
            while (SDL_PollEvent(&evt))
            {
                ImGui_ImplSDL2_ProcessEvent(&evt);
                if (evt.type == SDL_WINDOWEVENT && evt.window.event == SDL_WINDOWEVENT_RESIZED && evt.window.windowID == SDL_GetWindowID(window))
                {
                    gui.window_size.x = static_cast<float>(evt.window.data1);
                    gui.window_size.y = static_cast<float>(evt.window.data2);
                }

                handle_event(gui, evt);
            }

            tick(gui);

            ImGui_ImplOpenGL2_NewFrame();
            ImGui_ImplSDL2_NewFrame(window);
            ImGui::NewFrame();

            render(gui);

            ImGui::Render();
            glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
            glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
            glClear(GL_COLOR_BUFFER_BIT);
            ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
            SDL_GL_SwapWindow(window);
        }

        ImGui_ImplOpenGL2_Shutdown();
        ImGui_ImplSDL2_Shutdown();
        ImGui::DestroyContext();

        SDL_GL_DeleteContext(gl_context);
        SDL_DestroyWindow(window);
        SDL_Quit();

        return 0;
    }
}

#endif
