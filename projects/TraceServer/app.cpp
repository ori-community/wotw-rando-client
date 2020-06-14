#include <ext.h>
#include <trace_structs.h>
#include <gui/imgui.h>
#include <gui/imgui_internal.h>
#include <gui/implementation/imgui_impl_opengl2.h>
#include <gui/implementation/imgui_impl_sdl.h>

#include <WinNetwork/constants.h>
#include <WinNetwork/binary_walker.h>
#include <WinNetwork/peer.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>

#include <stdio.h>
#include <string>
#include <vector>

void trace_show_top_bar(network::NetworkData& data, TraceData& trace);
void show_filter_window(TraceData& trace);
void show_info_window(TraceData& trace);
void show_trace_data(network::NetworkData& data, TraceData& trace);
void handle_events(GuiData& data, SDL_Event const& event);
void init_test_data(GuiData& data);

void handle_network_events(GuiData& data, network::NetworkEvent const& evt);

int main(int, char**)
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMECONTROLLER) != 0)
    {
        printf("Error: %s\n", SDL_GetError());
        return -1;
    }

    GuiData data;

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
        "Trace Server",
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

    //init_test_data(data);

    network::NetworkData sd;
    sd.port = 27666;
    sd.listen_queue_size = 10;
    sd.logging_callback = [&data](std::string const& str) {
        data.log.push_back(str);
    };
    
    sd.event_handler = [&data](network::NetworkEvent const& evt) { handle_network_events(data, evt); };

    network::initialize_peer(sd);
    network::start_peer(sd);

    while (data.running)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSDL2_ProcessEvent(&event);
            handle_events(data, event);
        }

        network::poll_peer(sd);

        // TODO: Add a way to reopen closed traces.
        // Remove disconnected and closed traces.
        for (auto it = data.traces.begin(); it != data.traces.end();)
        {
            if (!it->connected && !it->open)
                it = data.traces.erase(it);
            else
                ++it;
        }

        ImGui_ImplOpenGL2_NewFrame();
        ImGui_ImplSDL2_NewFrame(window);
        ImGui::NewFrame();

        {
            ImGui::Begin(
                "Main Window",
                nullptr,
                ImGuiWindowFlags_NoTitleBar |
                ImGuiWindowFlags_NoMove |
                ImGuiWindowFlags_NoResize |
                ImGuiWindowFlags_NoBringToFrontOnFocus
            );

            ImGui::SetWindowPos({ 0.f, 0.f });
            ImGui::SetWindowSize(data.window_size, ImGuiCond_Always);
            ImGui::Dummy({ 10.f, 10.f });
            ImGui::Dummy({ 10.f, 10.f });
            ImGui::SameLine();
            ImGui::Text("Trace Server");
            ImGui::Dummy({ 20.f, 10.f });
            ImGui::SameLine();
            ImGui::Text("Shows windows for each application we are tracing.");
            ImGui::Dummy({ 10.f, 100.f });
            ImGui::Dummy({ 10.f, 10.f });
            ImGui::SameLine();
            ImGui::Text("FPS: %d", ImGui::GetFrameCount());
            ImGui::Text("Size: {%f, %f}", data.window_size.x, data.window_size.y);

            auto size = ImGui::GetContentRegionAvail();
            const float desired_size = 200.f;
            auto offset = size.y - desired_size - 5.f;
            if (offset < 0.f)
                offset = 0.f;

            ImGui::Dummy({ 0.f, offset });
            ImGui::BeginChild(2, { size.x, desired_size }, true, ImGuiWindowFlags_NoTitleBar);
            for (auto const& str : data.log)
                ImGui::Text(str.c_str());

            if (data.log.size() > data.prev_log_count)
                ImGui::SetScrollY(ImGui::GetScrollMaxY());

            data.prev_log_count = static_cast<int>(data.log.size());
            ImGui::EndChild();

            for (auto& trace : data.traces)
                show_trace_data(sd, trace);

            ImGui::End();
        }
        
        ImGui::Render();
        glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }

    network::shutdown_peer(sd);

    ImGui_ImplOpenGL2_Shutdown();
    ImGui_ImplSDL2_Shutdown();
    ImGui::DestroyContext();

    SDL_GL_DeleteContext(gl_context);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

void show_trace_data(network::NetworkData& data, TraceData& trace)
{
    if (!trace.open)
        return;

    ImGui::SetNextWindowSizeConstraints({ 600.f, 300.f }, { 999999.f , 999999.f });
    ImGui::SetNextWindowSize({ 600.f, 300.f }, ImGuiCond_Once);
    ImGui::SetNextWindowPos({ 260.f, 60.f }, ImGuiCond_Once);

    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(5.f, 0.f));
    ImGui::PushStyleColor(ImGuiCol_MenuBarBg, { 0.05f, 0.05f, 0.05f, 1.f });

    auto name = std::string(format("%s###%d", trace.name.c_str(), trace.gid));
    ImGui::Begin(name.c_str(), &trace.open, ImGuiWindowFlags_MenuBar);

    ImGui::PopStyleColor();
    ImGui::PopStyleVar();

    trace_show_top_bar(data, trace);
    if (trace.show_filters)
        show_filter_window(trace);

    show_info_window(trace);

    for (int i = 0; i < 5; ++i)
        trace.column_widths[i] = ImGui::GetColumnWidth(i);

    if (trace.auto_scroll && trace.prev_entry_count < trace.messages.size())
        ImGui::SetScrollY(ImGui::GetScrollMaxY());

    trace.prev_entry_count = static_cast<int>(trace.messages.size());
    ImGui::EndChild();
    ImGui::End();
}

void trace_show_top_bar(network::NetworkData& data, TraceData& trace)
{
    ImGui::BeginMenuBar();
    auto context = ImGui::GetCurrentContext();
    auto menu_rect = context->CurrentWindow->ClipRect;

    // For some reason this rectangle is off by a few pixels.
    ImGui::PopClipRect();
    menu_rect.Max += ImVec2{ 7.f, 0.f };
    ImGui::PushClipRect(menu_rect.Min, menu_rect.Max, false);
    menu_rect.Min += ImVec2{ 5.f, 0.f };
    menu_rect.Max += ImVec2{ -5.f, -2.f };

    auto border = ImGui::GetStyleColorVec4(ImGuiCol_Border);
    ImGui::GetWindowDrawList()->AddRect(
        menu_rect.Min,
        menu_rect.Max,
        ImGui::ColorConvertFloat4ToU32(border),
        0,
        0
    );

    if (ImGui::BeginMenu("file"))
    {
        // TODO: Implement export.
        if (ImGui::MenuItem("export", nullptr, false, false))
            ;

        ImGui::EndMenu();
    }

    if (ImGui::BeginMenu("options"))
    {
        if (ImGui::MenuItem("show filters", nullptr, trace.show_filters))
            trace.show_filters = !trace.show_filters;
        if (ImGui::MenuItem("auto scroll", nullptr, trace.auto_scroll))
            trace.auto_scroll = !trace.auto_scroll;

        ImGui::EndMenu();
    }

    auto pos_y = ImGui::GetCursorPosY();
    ImGui::SetCursorPosY(pos_y + 3.f);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, { 0.0f, 0.0f });
    if (ImGui::Button("send test", { 80.f, menu_rect.GetSize().y - 4.f }))
        network::send_str(data, trace.id, "this is a test.");

    ImGui::PopStyleVar();
    ImGui::SetCursorPos({ ImGui::GetWindowWidth() - 93.f, pos_y - 1.f });
    ImGui::PushStyleColor(ImGuiCol_Text, trace.connected ? ImVec4{ 0.f, 0.8f, 0.f, 1.f } : ImVec4{ 0.8f, 0.f, 0.f, 1.f });
    ImGui::Text(trace.connected ? "connected" : "disconnected");
    ImGui::PopStyleColor();

    ImGui::EndMenuBar();
}

void show_filter_window(TraceData& trace)
{
    auto size = ImGui::GetContentRegionAvail();
    ImGui::BeginChild(1, { 140.f, size.y - 5.f }, true, ImGuiWindowFlags_NoTitleBar);

    ImGui::Text("Filters");
    ImGui::Separator();
    ImGui::Dummy({ 0.f, 5.f });
    ImGui::Text("min level:");
    ImGui::SameLine(80.f);
    auto value = 0;
    if (trace.min_level_filter.selected >= 0 && trace.min_level_filter.selected < trace.min_level_filter.values.size())
        value = trace.min_level_filter.values[trace.min_level_filter.selected];

    if (begin_dropdown("min_level", std::to_string(value).c_str(), { 50.0f, 20.0f }))
    {
        for (int i = 0; i < trace.min_level_filter.values.size(); ++i)
        {
            auto const& value = trace.min_level_filter.values[i];
            if (ImGui::Button(std::to_string(value).c_str(), { 30.0f, 20.0f }))
            {
                trace.min_level_filter.selected = i;
                trace.max_level_filter.selected = i < trace.max_level_filter.selected ? trace.max_level_filter.selected : i;
                ImGui::CloseCurrentPopup();
            }
        }

        end_dropdown();
    }

    ImGui::Text("max level:");
    ImGui::SameLine(80.f);
    value = 0;
    if (trace.max_level_filter.selected >= 0 && trace.max_level_filter.selected < trace.max_level_filter.values.size())
        value = trace.max_level_filter.values[trace.max_level_filter.selected];

    if (begin_dropdown("max_level", std::to_string(value).c_str(), { 50.0f, 20.0f }))
    {
        for (int i = trace.min_level_filter.selected; i < trace.max_level_filter.values.size(); ++i)
        {
            auto const& value = trace.max_level_filter.values[i];
            if (ImGui::Button(std::to_string(value).c_str(), { 30.0f, 20.0f }))
            {
                trace.max_level_filter.selected = i;
                ImGui::CloseCurrentPopup();
            }
        }

        end_dropdown();
    }

    ImGui::Dummy({ 0.f, 5.f });

    ImGui::Checkbox("show info", &trace.show_type[0]);
    ImGui::Checkbox("show warning", &trace.show_type[1]);
    ImGui::Checkbox("show error", &trace.show_type[2]);
    ImGui::Checkbox("show debug", &trace.show_type[3]);

    ImGui::Dummy({ 0.f, 5.f });
    auto inner_size = ImGui::GetContentRegionAvail();
    ImGui::Text("group search:");
    ImGui::PushID("group");
    ImGui::PushItemWidth(inner_size.x);
    ImGui::InputText("", trace.group_filter, 64);
    ImGui::PopItemWidth();
    ImGui::PopID();

    ImGui::Text("text search:");
    ImGui::PushID("text");
    ImGui::PushItemWidth(inner_size.x);
    ImGui::InputText("", trace.text_filter, 256);
    ImGui::PopItemWidth();
    ImGui::PopID();

    ImGui::EndChild();
    ImGui::SameLine();
}

bool is_in_filter(TraceData const& trace, Message const& message)
{
    int type = static_cast<int>(message.type);
    if (!trace.show_type[type])
        return false;

    auto value = trace.min_level_filter.values[trace.min_level_filter.selected];
    if (value > message.level)
        return false;

    value = trace.max_level_filter.values[trace.max_level_filter.selected];
    if (value < message.level)
        return false;

    auto group_filter = std::string(trace.group_filter);
    if (!group_filter.empty() && message.group.find(group_filter) == std::string::npos)
        return false;

    auto text_filter = std::string(trace.text_filter);
    if (!text_filter.empty() && message.message.find(text_filter) == std::string::npos)
        return false;

    return true;
}

void show_info_window(TraceData& trace)
{
    auto size = ImGui::GetContentRegionAvail();
    ImGui::BeginChild(2, { size.x, size.y - 5.f }, true, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_HorizontalScrollbar);
    ImGui::Columns(5);

    if (!trace.init)
    {
        trace.info_window = ImGui::GetWindowSize();
        ImGui::SetColumnWidth(0, 40.0f);
        ImGui::SetColumnWidth(1, 60.0f);
        ImGui::SetColumnWidth(2, 50.0f);
        ImGui::SetColumnWidth(3, 100.0f);
        trace.init = true;
    }
    else
    {
        // We only want to resize the last column.
        ImVec2 size = ImGui::GetWindowSize();
        if (size.x != trace.info_window.x || size.y != trace.info_window.y)
            for (int i = 0; i < 4; ++i)
                ImGui::SetColumnWidth(i, trace.column_widths[i]);

        trace.info_window = size;
    }

    ImGui::Text("copy");
    ImGui::NextColumn();
    ImGui::Text("type");
    ImGui::NextColumn();
    ImGui::Text("level");
    ImGui::NextColumn();
    ImGui::Text("group");
    ImGui::NextColumn();
    ImGui::Text("message");
    ImGui::NextColumn();

    ImGui::Separator();

    int i = 0;
    for (auto const& message : trace.messages)
    {
        int type = static_cast<int>(message.type);
        if (!is_in_filter(trace, message))
            continue;

        auto const& color = MessageTypeColors[type];
        auto const& type_string = MessageTypeNames[type];

        ImGui::PushID(i);
        if (ImGui::Button("", { 25.f, 15.f }))
        {
            auto copy = type_string;
            copy += " : ";
            copy += std::to_string(message.level);
            copy += " : ";
            copy += message.group;
            copy += " ";
            copy += message.message;
            ImGui::SetClipboardText(copy.c_str());
        }

        ++i;
        ImGui::PopID();
        ImGui::NextColumn();
        ImGui::PushStyleColor(ImGuiCol_Text, color);
        ImGui::Text(type_string.c_str());
        ImGui::PopStyleColor();
        ImGui::NextColumn();
        ImGui::Text(std::to_string(message.level).c_str());
        ImGui::NextColumn();
        ImGui::Text(message.group.c_str());
        ImGui::NextColumn();
        ImGui::Text(message.message.c_str());
        ImGui::NextColumn();
    }
}

void handle_events(GuiData& data, SDL_Event const& event)
{
    if (event.type == SDL_WINDOWEVENT)
    {
        switch (event.window.event)
        {
        case SDL_WINDOWEVENT_RESIZED:
            data.window_size.x = static_cast<float>(event.window.data1);
            data.window_size.y = static_cast<float>(event.window.data2);
            break;
        default:
            break;
        }
    }

    if (event.type == SDL_QUIT)
        data.running = false;
}

void handle_network_events(GuiData& data, network::NetworkEvent const& evt)
{
    switch (evt.type)
    {
    case network::NetworkEventType::Connected:
    {
        data.log.push_back(format("new client connected: %d", evt.peer_id));
        TraceData td{ data.next_gid++, evt.peer_id, format("%f", ImGui::GetTime()) };
        td.connected = true;
        data.traces.push_back(td);
        break;
    }
    case network::NetworkEventType::Disconnected:
    {
        data.log.push_back(format("client disconnected: %d", evt.peer_id));
        auto it = std::find_if(data.traces.begin(), data.traces.end(), [&evt](TraceData const& data) -> bool {
            return data.id == evt.peer_id;
        });

        if (it != data.traces.end())
            it->connected = false;

        break;
    }
    case network::NetworkEventType::Package:
    {
        network::binary::BinaryWalker walker;
        walker.cursor = 0;
        walker.data = evt.data;
        walker.size = evt.size;
        auto package_type = network::binary::read_bw<network::PackageType>(walker);
        switch (package_type)
        {
        case network::PackageType::Identifier:
        {
            auto str = network::binary::read_str_bw(walker);
            auto it = std::find_if(data.traces.begin(), data.traces.end(), [&evt](TraceData const& data) -> bool {
                return data.id == evt.peer_id;
            });

            if (it != data.traces.end())
                it->name = str;

            break;
        }
        case network::PackageType::TraceMessage:
        {
            auto it = std::find_if(data.traces.begin(), data.traces.end(), [&evt](TraceData const& data) -> bool {
                return data.id == evt.peer_id;
            });

            if (it != data.traces.end())
            {
                Message m;
                m.type = static_cast<MessageType>(network::binary::read_bw<int>(walker));
                m.level = network::binary::read_bw<int>(walker);
                m.group = network::binary::read_str_bw(walker);
                m.message = network::binary::read_str_bw(walker);
                it->messages.push_back(m);
            }

            break;
        }
        case network::PackageType::Ping:
        case network::PackageType::Message:
        case network::PackageType::ConfigPing:
            break;
        default:
            data.log.push_back(format("unknown package : %d", package_type));
            break;
        }
        break;
    }
    default:
        // This should never happen
        break;
    }
}

void init_test_data(GuiData& data)
{
    data.traces.push_back({ data.next_gid++, 255555, "test" });
    auto& test = data.traces.back();
    test.messages.push_back({
        1,
        MessageType::Info,
        "[t_group]",
        "this is a message"
        });
    test.messages.push_back({
        1,
        MessageType::Error,
        "[t_group]",
        "this is a message 2"
        });
    test.messages.push_back({
        2,
        MessageType::Warning,
        "[t_group]",
        "this is a message 3"
        });
    test.messages.push_back({
        1,
        MessageType::Info,
        "[t_series]",
        "we are the champions"
        });
    test.messages.push_back({
        3,
        MessageType::Error,
        "[t_series]",
        "we are the champions my friend"
        });
    test.messages.push_back({
        2,
        MessageType::Warning,
        "[t_series]",
        "we are the champions my friend, 111111111111111111111111111111111111111111"
        });

    for (int i = 0; i < 20; ++i)
    {
        test.messages.push_back({
            4,
            MessageType::Info,
            "[pad]",
            "padding"
            });
    }
}
