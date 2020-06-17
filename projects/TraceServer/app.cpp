#include <trace_structs.h>

#include <Common/ext.h>

#include <GuiEngine/engine.h>
#include <GuiEngine/gui/imgui_internal.h>
#include <GuiEngine/gui_helpers/dropdown.h>

#include <WinNetwork/binary_walker.h>
#include <WinNetwork/constants.h>
#include <WinNetwork/peer.h>

#include <stdio.h>
#include <string>
#include <vector>

using namespace gui_engine;

void trace_show_top_bar(network::NetworkData& data, TraceData& trace);
void show_filter_window(TraceData& trace, ImVec2 const& size);
void show_info_window(TraceData& trace, ImVec2 const& size);
void show_trace_data(network::NetworkData& data, TraceData& trace);
void init_test_data(GuiData& data);

void handle_network_events(GuiData& data, network::NetworkEvent const& evt);

void initalize(GuiData& gui)
{
    //init_test_data(gui);
}

void handle_events(GuiData& gui, SDL_Event const& evt)
{
    if (evt.type == SDL_QUIT)
        gui.running = false;
}

void tick(GuiData& gui)
{
    ExtraGuiData& extra = *static_cast<ExtraGuiData*>(gui.extra);
    network::poll_peer(extra.network_data);

    // TODO: Add a way to reopen closed traces.
    for (auto it = extra.traces.begin(); it != extra.traces.end();)
    {
        if (!it->connected && !it->open)
            it = extra.traces.erase(it);
        else
            ++it;
    }
}

void render(GuiData& gui)
{
    ExtraGuiData& extra = *static_cast<ExtraGuiData*>(gui.extra);
    ImGui::Begin(
        "Main Window",
        nullptr,
        ImGuiWindowFlags_NoTitleBar |
        ImGuiWindowFlags_NoMove |
        ImGuiWindowFlags_NoResize |
        ImGuiWindowFlags_NoBringToFrontOnFocus
    );

    ImGui::SetWindowPos({ 0.f, 0.f });
    ImGui::SetWindowSize(gui.window_size, ImGuiCond_Always);
    if (ImGui::BeginTabBar("##tabs", ImGuiTabBarFlags_Reorderable | ImGuiTabBarFlags_NoTooltip))
    {
        if (ImGui::BeginTabItem("Home", nullptr))
        {
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
            ImGui::Text("%.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::Dummy({ 10.f, 10.f });
            ImGui::SameLine();
            ImGui::Text("Size: {%f, %f}", gui.window_size.x, gui.window_size.y);

            auto size = ImGui::GetContentRegionAvail();
            const float desired_size = 200.f;
            auto offset = size.y - desired_size - 5.f;
            if (offset < 0.f)
                offset = 0.f;

            ImGui::Dummy({ 0.f, offset });
            ImGui::BeginChild(2, { size.x, desired_size }, true, ImGuiWindowFlags_NoTitleBar);
            for (auto const& str : extra.log)
                ImGui::Text(str.c_str());

            if (extra.log.size() > extra.prev_log_count)
                ImGui::SetScrollY(ImGui::GetScrollMaxY());

            extra.prev_log_count = static_cast<int>(extra.log.size());
            ImGui::EndChild();
            ImGui::EndTabItem();
        }

        for (auto& trace : extra.traces)
        {
            ImGui::PushID(trace.gid);
            if (ImGui::BeginTabItem(trace.name.c_str(), &trace.open))
            {
                show_trace_data(extra.network_data, trace);
                ImGui::EndTabItem();
            }

            ImGui::PopID();
        }

        ImGui::EndTabBar();
    }

    ImGui::End();
}

int main(int, char**)
{
    GuiData gui;
    ExtraGuiData extra;
    gui.extra = &extra;

    extra.network_data.port = 27666;
    extra.network_data.listen_queue_size = 10;
    extra.network_data.logging_callback = [&extra](std::string const& str) {
        extra.log.push_back(str);
    };

    extra.network_data.event_handler = [&gui](network::NetworkEvent const& evt) { handle_network_events(gui, evt); };

    network::initialize_peer(extra.network_data);
    network::start_peer(extra.network_data);

    int ret = start_loop(gui, initalize, handle_events, tick, render);

    network::shutdown_peer(extra.network_data);
    return ret;
}

void show_trace_data(network::NetworkData& data, TraceData& trace)
{
    auto name = std::string(format("%s###%d", trace.name.c_str(), trace.gid));

    const float INPUT_TEXT_HEIGHT = 20.f;
    trace_show_top_bar(data, trace);
    auto size = ImGui::GetContentRegionAvail();
    size.y -= INPUT_TEXT_HEIGHT;
    if (trace.show_filters)
        show_filter_window(trace, size);

    size = ImGui::GetContentRegionAvail();
    size.y -= INPUT_TEXT_HEIGHT;
    show_info_window(trace, size);

    size = ImGui::GetContentRegionAvail();
    ImGui::PushItemWidth(size.x);
    if (!trace.connected)
    {
        ImGui::PushStyleVar(ImGuiStyleVar_Alpha, 0.6f);
        ImGui::InputText("##command_line", trace.command_line.data(), trace.command_line.size(), ImGuiInputTextFlags_ReadOnly);
        ImGui::PopStyleVar();
    }
    else if (ImGui::InputText("##command_line", trace.command_line.data(), trace.command_line.size(), ImGuiInputTextFlags_EnterReturnsTrue))
        send_str(data, trace.id, trace.command_line.data());



    ImGui::PopItemWidth();
}

void trace_show_top_bar(network::NetworkData& data, TraceData& trace)
{
    auto size = ImGui::GetContentRegionAvail();
    const float bar_size_y = 20.f;

    if (begin_dropdown("file", "file", { 50.f, bar_size_y }, false))
    {
        ImGui::PushStyleColor(ImGuiCol_Button, { 0.f, 0.f, 0.f, 0.f });
        ImGui::PushStyleColor(ImGuiCol_ButtonHovered, { 0.3f, 0.3f, 0.3f, 0.4f });
        ImGui::PushStyleColor(ImGuiCol_ButtonActive, { 0.4f, 0.4f, 0.4f, 0.7f });
        if (ImGui::Button("export"))
            ImGui::CloseCurrentPopup();

        ImGui::PopStyleColor(3);
        end_dropdown();
    }

    ImGui::SameLine();
    if (begin_dropdown("options", "options", { 60.f, bar_size_y }, false))
    {
        ImGui::Checkbox("show filters", &trace.show_filters);
        ImGui::Checkbox("auto scroll", &trace.auto_scroll);
        end_dropdown();
    }

    ImGui::SameLine();
    ImGui::SetCursorPosX(size.x - 93.f);
    ImGui::PushStyleColor(ImGuiCol_Text, trace.connected ? ImVec4{ 0.f, 0.8f, 0.f, 1.f } : ImVec4{ 0.8f, 0.f, 0.f, 1.f });
    ImGui::Text(trace.connected ? "connected" : "disconnected");
    ImGui::PopStyleColor();
}

bool is_in_filter(TraceData const& trace, Message const& message)
{
    int type = static_cast<int>(message.type);
    if (!trace.filter.show_type[type])
        return false;

    auto value = trace.min_dropdown.values[trace.filter.min_level_filter];
    if (value > message.level)
        return false;

    value = trace.max_dropdown.values[trace.filter.max_level_filter];
    if (value < message.level)
        return false;

    auto group_filter = std::string(trace.filter.group_filter.data());
    if (!group_filter.empty() && message.group.find(group_filter) == std::string::npos)
        return false;

    auto text_filter = std::string(trace.filter.text_filter.data());
    if (!text_filter.empty() && message.message.find(text_filter) == std::string::npos)
        return false;

    return true;
}

void resolve_filter(TraceData& trace)
{
    trace.filtered_messages.clear();
    for (auto i = 0; i < trace.messages.size(); ++i)
        if (is_in_filter(trace, trace.messages[i]))
            trace.filtered_messages.push_back(i);
}

void show_filter_window(TraceData& trace, ImVec2 const& size)
{
    auto old_filter = trace.filter;
    ImGui::BeginChild(1, { 140.f, size.y }, true, ImGuiWindowFlags_NoTitleBar);

    ImGui::Text("Filters");
    ImGui::Separator();
    ImGui::Dummy({ 0.f, 5.f });
    ImGui::Text("min level:");
    ImGui::SameLine(80.f);
    auto value = 0;
    if (trace.filter.min_level_filter >= 0 && trace.filter.min_level_filter < trace.min_dropdown.values.size())
        value = trace.min_dropdown.values[trace.filter.min_level_filter];

    if (begin_dropdown("min_level", std::to_string(value).c_str(), { 50.0f, 20.0f }))
    {
        for (int i = 0; i < trace.min_dropdown.values.size(); ++i)
        {
            auto const& value = trace.min_dropdown.values[i];
            if (ImGui::Button(std::to_string(value).c_str(), { 30.0f, 20.0f }))
            {
                trace.filter.min_level_filter = i;
                trace.filter.max_level_filter = i < trace.filter.max_level_filter ? trace.filter.max_level_filter : i;
                ImGui::CloseCurrentPopup();
            }
        }

        end_dropdown();
    }

    ImGui::Text("max level:");
    ImGui::SameLine(80.f);
    value = 0;
    if (trace.filter.max_level_filter >= 0 && trace.filter.max_level_filter < trace.max_dropdown.values.size())
        value = trace.max_dropdown.values[trace.filter.max_level_filter];

    if (begin_dropdown("max_level", std::to_string(value).c_str(), { 50.0f, 20.0f }))
    {
        for (int i = trace.filter.min_level_filter; i < trace.max_dropdown.values.size(); ++i)
        {
            auto const& value = trace.max_dropdown.values[i];
            if (ImGui::Button(std::to_string(value).c_str(), { 30.0f, 20.0f }))
            {
                trace.filter.max_level_filter = i;
                ImGui::CloseCurrentPopup();
            }
        }

        end_dropdown();
    }

    ImGui::Dummy({ 0.f, 5.f });

    ImGui::Checkbox("show info", &trace.filter.show_type[0]);
    ImGui::Checkbox("show warning", &trace.filter.show_type[1]);
    ImGui::Checkbox("show error", &trace.filter.show_type[2]);
    ImGui::Checkbox("show debug", &trace.filter.show_type[3]);

    ImGui::Dummy({ 0.f, 5.f });
    auto inner_size = ImGui::GetContentRegionAvail();
    ImGui::Text("group search:");
    ImGui::PushID("group");
    ImGui::PushItemWidth(inner_size.x);
    ImGui::InputText("", trace.filter.group_filter.data(), 64);
    ImGui::PopItemWidth();
    ImGui::PopID();

    ImGui::Text("text search:");
    ImGui::PushID("text");
    ImGui::PushItemWidth(inner_size.x);
    ImGui::InputText("", trace.filter.text_filter.data(), 256);
    ImGui::PopItemWidth();
    ImGui::PopID();

    ImGui::EndChild();
    ImGui::SameLine();

    if (old_filter != trace.filter)
        resolve_filter(trace);
}

void show_info_window(TraceData& trace, ImVec2 const& size)
{
    if (trace.do_scroll)
        ImGui::SetScrollY(ImGui::GetScrollMaxY());

    static ImGuiTableFlags flags =
        ImGuiTableFlags_ScrollY |
        ImGuiTableFlags_ScrollFreezeTopRow |
        ImGuiTableFlags_RowBg |
        ImGuiTableFlags_BordersOuter |
        ImGuiTableFlags_BordersV | 
       ImGuiTableFlags_Resizable |
        ImGuiTableFlags_Reorderable |
        ImGuiTableFlags_Hideable;

    if (ImGui::BeginTable("##table1", 5, flags, size))
    {
        ImGui::TableSetupColumn("copy", ImGuiTableColumnFlags_WidthFixed | ImGuiTableColumnFlags_NoResize, 40.f);
        ImGui::TableSetupColumn("type", ImGuiTableColumnFlags_WidthFixed);
        ImGui::TableSetupColumn("level", ImGuiTableColumnFlags_WidthFixed);
        ImGui::TableSetupColumn("group", ImGuiTableColumnFlags_WidthFixed);
        ImGui::TableSetupColumn("message", ImGuiTableColumnFlags_None);
        ImGui::TableAutoHeaders();
        ImGuiListClipper clipper;
        clipper.Begin(trace.filtered_messages.size());
        while (clipper.Step())
        {
            for (int row = clipper.DisplayStart; row < clipper.DisplayEnd; row++)
            {
                ImGui::TableNextRow();
                auto& message = trace.messages[trace.filtered_messages[row]];
                int type = static_cast<int>(message.type);
                auto const& color = MessageTypeColors[type];
                auto const& type_string = MessageTypeNames[type];

                ImGui::TableSetColumnIndex(0);
                ImGui::PushID(row);
                if (ImGui::Button("", { 28.f, 15.f }))
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
                ImGui::PopID();

                ImGui::TableSetColumnIndex(1);
                ImGui::PushStyleColor(ImGuiCol_Text, color);
                ImGui::Text(type_string.c_str());
                ImGui::PopStyleColor();

                ImGui::TableSetColumnIndex(2);
                ImGui::Text(std::to_string(message.level).c_str());
                
                ImGui::TableSetColumnIndex(3);
                ImGui::Text(message.group.c_str());

                ImGui::TableSetColumnIndex(4);
                ImGui::Text(message.message.c_str());
            }
        }
        ImGui::EndTable();
    }
}

void handle_network_events(GuiData& gui, network::NetworkEvent const& evt)
{
    ExtraGuiData& extra = *static_cast<ExtraGuiData*>(gui.extra);
    switch (evt.type)
    {
    case network::NetworkEventType::Connected:
    {
        extra.log.push_back(format("new client connected: %d", evt.peer_id));
        TraceData td{ extra.next_gid++, evt.peer_id, format("%f", ImGui::GetTime()) };
        td.connected = true;
        extra.traces.push_back(td);
        break;
    }
    case network::NetworkEventType::Disconnected:
    {
        extra.log.push_back(format("client disconnected: %d", evt.peer_id));
        auto it = std::find_if(extra.traces.begin(), extra.traces.end(), [&evt](TraceData const& data) -> bool {
            return data.id == evt.peer_id;
        });

        if (it != extra.traces.end())
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
            auto it = std::find_if(extra.traces.begin(), extra.traces.end(), [&evt](TraceData const& data) -> bool {
                return data.id == evt.peer_id;
            });

            if (it != extra.traces.end())
                it->name = str;

            break;
        }
        case network::PackageType::TraceMessage:
        {
            auto it = std::find_if(extra.traces.begin(), extra.traces.end(), [&evt](TraceData const& data) -> bool {
                return data.id == evt.peer_id;
            });

            if (it != extra.traces.end())
            {
                Message m;
                m.type = static_cast<MessageType>(network::binary::read_bw<int>(walker));
                m.level = network::binary::read_bw<int>(walker);
                m.group = network::binary::read_str_bw(walker);
                m.message = network::binary::read_str_bw(walker);
                it->messages.push_back(m);
                if (is_in_filter(*it, m))
                {
                    it->filtered_messages.push_back(it->messages.size() - 1);
                    if (it->auto_scroll)
                        it->do_scroll = true;
                }
            }

            break;
        }
        case network::PackageType::Ping:
        case network::PackageType::Message:
        case network::PackageType::ConfigPing:
            break;
        default:
            extra.log.push_back(format("unknown package : %d", package_type));
            break;
        }
        break;
    }
    default:
        // This should never happen
        break;
    }
}

void init_test_data(GuiData& gui)
{
    ExtraGuiData& extra = *static_cast<ExtraGuiData*>(gui.extra);
    extra.traces.push_back({ extra.next_gid++, 255555, "test" });
    auto& test = extra.traces.back();
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

    for (int i = 0; i < 2000; ++i)
    {
        test.messages.push_back({
            4,
            MessageType::Info,
            "[pad]",
            "padding"
            });
    }

    resolve_filter(test);
}
