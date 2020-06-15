#pragma once

#if !USE_VULKAN

#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
#include <gui/implementation/imgui_impl_sdl.h>
#include <gui/implementation/imgui_impl_opengl2.h>

using init_callback = void (*)();
using event_callback = void (*)(SDL_Event const& evt);
using tick_callback = void (*)();
using render_callback = void (*)();

int start_loop(GuiData& data, init_callback init, event_callback handle_event, tick_callback tick, render_callback render)
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
        data.title.c_str(),
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        static_cast<int>(data.window_size.x),
        static_cast<int>(data.window_size.y),
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

    init();

    while (data.running)
    {
        SDL_Event evt;
        while (SDL_PollEvent(&evt))
        {
            ImGui_ImplSDL2_ProcessEvent(&evt);
            handle_event(data, evt);
        }

        tick();

        ImGui_ImplOpenGL2_NewFrame();
        ImGui_ImplSDL2_NewFrame(window);
        ImGui::NewFrame();

        render();

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
}

#endif
