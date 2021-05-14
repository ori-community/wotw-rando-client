#include <trace_structs.h>

#include <Common/csv.h>
#include <Common/ext.h>

#include <GuiEngine/engine.h>
#include <GuiEngine/gui/imgui_internal.h>
#include <GuiEngine/gui_helpers/dropdown.h>
#include <GuiEngine/gui_helpers/layout.h>

#include <WinNetwork/binary_walker.h>
#include <WinNetwork/constants.h>
#include <WinNetwork/peer.h>

#include <stdio.h>
#include <filesystem>
#include <string>
#include <vector>

using namespace gui_engine;

void resolve_filter(TraceData& trace);

void show_home_information(GuiData& gui, ExtraGuiData& extra);
void show_home_top_bar(ExtraGuiData& extra);
void show_randomizer_settings(ExtraGuiData& extra, ImVec2 wpos, ImVec2 wsize);
void trace_show_top_bar(ExtraGuiData& extra, TraceData& trace);
void show_filter_window(TraceData& trace, ImVec2 const& size);
void show_info_window(TraceData& trace, ImVec2 const& size);
void show_trace_data(ExtraGuiData& extra, TraceData& trace);

void show_import_dialogue(ExtraGuiData& extra);
void show_export_dialogue(ExtraGuiData& extra, TraceData& trace);

void init_test_data(GuiData& data);

void handle_network_events(GuiData& data, network::NetworkEvent const& evt);

void initalize(GuiData& gui)
{
    //init_test_data(gui);
    ExtraGuiData& extra = *static_cast<ExtraGuiData*>(gui.extra);
    // Nobody but me uses this program anyway :orilurk:
    extra.randomizer_settings = create_randomizer_settings("C:/moon/");
    load_settings_from_file(extra.randomizer_settings);
    extra.randomizer_settings_backup = extra.randomizer_settings;

    auto& io = ImGui::GetIO();
    io.KeyMap[ImGuiKey_Enter] = 0;
    io.KeyMap[ImGuiKey_Backspace] = 1;
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

    auto& io = ImGui::GetIO();
    io.KeysDown[ImGui::GetKeyIndex(ImGuiKey_Enter)] = (GetKeyState(VK_RETURN) & 0x8000) != 0;
    io.KeysDown[ImGui::GetKeyIndex(ImGuiKey_Backspace)] = (GetKeyState(VK_BACK) & 0x8000) != 0;
}

// MAIN UI LOOP
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
            show_home_top_bar(extra);
            if (extra.randomizer_settings_open)
                show_randomizer_settings(extra, { 0.f, 0.f }, gui.window_size);

            show_home_information(gui, extra);
            ImGui::EndTabItem();
        }

        for (auto& trace : extra.traces)
        {
            ImGui::PushID(trace.gid);
            if (ImGui::BeginTabItem(trace.name.c_str(), &trace.open))
            {
                show_trace_data(extra, trace);
                ImGui::EndTabItem();
            }

            ImGui::PopID();
        }

        ImGui::EndTabBar();
    }

    if (extra.import_open)
        show_import_dialogue(extra);

    for (auto& trace : extra.traces)
        if (trace.export_open)
            show_export_dialogue(extra, trace);

    ImGui::End();
}

std::regex csv_regex;
std::string exe_path;

int main(int argc, char** argv)
{
    exe_path = std::filesystem::weakly_canonical(std::filesystem::path(argv[0])).parent_path().string();
    csv_regex = std::regex("[\\s\\S]*\\.csv$");

    GuiData gui;
    ExtraGuiData extra(exe_path, csv_regex);
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

void import_csv(ExtraGuiData& extra, std::string const& path)
{
    CSV c;
    c.path = path;
    csv::csv_load_file(c);

    std::filesystem::path actual_path(path);
    TraceData td(
        extra.next_gid++,
        -1,
        actual_path.filename().replace_extension().string(),
        exe_path,
        csv_regex
    );

    td.connected = false;
    td.open = true;

    if (c.headers.size() != 4)
    {
        extra.log.push_back("Import failed, headers wrong size.");
        return;
    }

    std::array<std::string, 4> expected_headers = { "type", "group" , "level", "message" };
    for (auto i = 0; i < 4; ++i)
    {
        if (c.headers[i] != expected_headers[i])
        {
            extra.log.push_back(
                format("Import failed, header %d was wrong, expected '%s' found '%s'.",
                    i, expected_headers[i].c_str(), c.headers[i].c_str())
            );

            return;
        }
    }

    for (auto it = c.data.begin(); it != c.data.end(); it += 4)
    {
        Message m;
        m.type = static_cast<MessageType>(std::stoi(*it));
        m.group = *(it + 1);
        m.level = std::stoi(*(it + 2));
        m.message = *(it + 3);
        td.messages.push_back(m);
    }
    
    resolve_filter(td);
    extra.traces.push_back(td);
}

void show_import_dialogue(ExtraGuiData& extra)
{
    ImGui::SetNextWindowSize({ 600.f, 400.f }, ImGuiCond_FirstUseEver);
    if (ImGui::Begin("import", &extra.import_open))
    {
        gui_engine::file_selector::show(extra.import_file_selector);
        if (extra.import_file_selector.state != gui_engine::FileSelectorState::Active)
        {
            extra.import_open = false;
            if (extra.import_file_selector.state == FileSelectorState::Selected)
                import_csv(extra, extra.import_file_selector.path);
        }

        ImGui::End();
    }
}

void export_csv(ExtraGuiData& extra, TraceData& trace, std::string const& path)
{
    CSV c;
    c.path = path;
    c.headers = { "type", "group" , "level", "message" };

    for (auto const& m : trace.messages)
    {
        c.data.push_back(std::to_string(static_cast<int>(m.type)));
        c.data.push_back(m.group);
        c.data.push_back(std::to_string(m.level));
        c.data.push_back(m.message);
    }

    csv::csv_save_file(c);
}

void show_export_dialogue(ExtraGuiData& extra, TraceData& trace)
{
    ImGui::SetNextWindowSize({ 600.f, 400.f }, ImGuiCond_FirstUseEver);
    if (ImGui::Begin("export", &trace.export_open))
    {
        gui_engine::file_selector::show(trace.export_file_selector);
        if (trace.export_file_selector.state != gui_engine::FileSelectorState::Active)
        {
            trace.export_open = false;
            if (trace.export_file_selector.state == FileSelectorState::Selected)
                export_csv(extra, trace, trace.export_file_selector.path);
        }

        ImGui::End();
    }
}

void show_home_top_bar(ExtraGuiData& extra)
{
    auto size = ImGui::GetContentRegionAvail();
    const float bar_size_y = 20.f;

    if (begin_dropdown("file", "file", { 50.f, bar_size_y }, false))
    {
        ImGui::PushStyleColor(ImGuiCol_Button, { 0.f, 0.f, 0.f, 0.f });
        ImGui::PushStyleColor(ImGuiCol_ButtonHovered, { 0.3f, 0.3f, 0.3f, 0.4f });
        ImGui::PushStyleColor(ImGuiCol_ButtonActive, { 0.4f, 0.4f, 0.4f, 0.7f });

        if (ImGui::Button("import"))
        {
            extra.import_open = true;
            gui_engine::file_selector::reset(extra.import_file_selector);
            ImGui::CloseCurrentPopup();
        }

        ImGui::PopStyleColor(3);
        end_dropdown();
    }

    ImGui::SameLine();
    if (begin_dropdown("options", "options", { 60.f, bar_size_y }, false))
    {
        ImGui::PushStyleColor(ImGuiCol_Button, { 0.f, 0.f, 0.f, 0.f });
        ImGui::PushStyleColor(ImGuiCol_ButtonHovered, { 0.3f, 0.3f, 0.3f, 0.4f });
        ImGui::PushStyleColor(ImGuiCol_ButtonActive, { 0.4f, 0.4f, 0.4f, 0.7f });
        if (ImGui::Button("randomizer"))
        {
            ImGui::CloseCurrentPopup();
            extra.randomizer_settings_open = true;
        }

        ImGui::PopStyleColor(3);
        end_dropdown();
    }

    ImGui::Separator();
}

void show_home_information(GuiData& gui, ExtraGuiData& extra)
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
}

void save_settings(ExtraGuiData& extra, IniSettings& settings)
{
    extra.randomizer_settings = settings;
    extra.randomizer_settings_backup = settings;
    save_settings_to_file(settings);
}

void show_randomizer_settings(ExtraGuiData& extra, ImVec2 wpos, ImVec2 wsize)
{
    static ImGuiWindowFlags window_flags = ImGuiWindowFlags_None;
    constexpr float DESIRED_WIDTH = 0.4f;
    constexpr float DESIRED_HEIGHT = 0.6f;
    ImVec2 desired_size{
        DESIRED_WIDTH * wsize.x,
        DESIRED_HEIGHT * wsize.y
    };

    ImGui::SetNextWindowPos((wpos + wsize / 2) - desired_size / 2, ImGuiCond_Appearing);
    ImGui::SetNextWindowSize(desired_size, ImGuiCond_Appearing);
    ImGui::SetNextWindowSizeConstraints({ 240.f, 320.f }, { 99999.f, 99999.f });
    if (ImGui::Begin("randomizer settings", nullptr, window_flags))
    {
        ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, { 0.f, 0.f });

        Layout l;
        layout::begin_box_v(l);
        layout::element(l, "settings");
        layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 99999.f, 20.f });
        layout::begin_box_h(l);
        layout::pop_var<BoxVarType::MaxSize>(l);
        layout::element(l);
        layout::push_var<BoxVarType::MinSize>(l, ImVec2{ 60.f, 20.f });
        layout::element(l, "save");
        layout::pop_var<BoxVarType::MinSize>(l);
        layout::push_var<BoxVarType::MinSize>(l, ImVec2{ 20.f, 0.f });
        layout::element(l);
        layout::pop_var<BoxVarType::MinSize>(l);
        layout::push_var<BoxVarType::MinSize>(l, ImVec2{ 60.f, 20.f });
        layout::element(l, "cancel");
        layout::pop_var<BoxVarType::MinSize>(l);
        layout::element(l);
        layout::end_box(l);
        layout::end_box(l);

        auto pos = ImGui::GetCursorPos();
        ImGui::SetCursorPos(pos);
        auto size = ImGui::GetContentRegionAvail();
        layout::calculate_bounds(l, { pos, pos + size });

        if (ImGui::Button("Save", gui_engine::layout::apply_layout(l, "save")))
        {
            save_settings(extra, extra.randomizer_settings);
            extra.randomizer_settings_open = false;
        }

        if (ImGui::Button("Cancel", gui_engine::layout::apply_layout(l, "cancel")))
        {
            save_settings(extra, extra.randomizer_settings_backup);
            extra.randomizer_settings_open = false;
        }

        static ImGuiTableFlags flags =
            ImGuiTableFlags_ScrollY |
            ImGuiTableFlags_ScrollX |
            ImGuiTableFlags_ScrollFreezeTopRow |
            ImGuiTableFlags_Borders;

        constexpr float height_margin = 0.5f;

        if (ImGui::BeginTable("###settings", 3, flags, gui_engine::layout::apply_layout(l, "settings", { 2.f, 2.f, 2.f, 8.f })))
        {
            ImGui::TableSetupColumn("section", ImGuiTableColumnFlags_WidthFixed | ImGuiTableColumnFlags_NoResize);
            ImGui::TableSetupColumn("name", ImGuiTableColumnFlags_WidthFixed | ImGuiTableColumnFlags_NoResize);
            ImGui::TableSetupColumn("value", ImGuiTableColumnFlags_WidthFixed | ImGuiTableColumnFlags_NoResize);
            ImGui::TableAutoHeaders();

            ImGui::PushStyleColor(ImGuiCol_TableRowBg, { 0.1f, 0.1f, 0.1f, 1.0f });
            ImGui::PushStyleColor(ImGuiCol_TableRowBgAlt, { 0.3f, 0.3f, 0.3f, 1.0f });
            int i = 1;
            std::string current_section;
            for (auto& option : extra.randomizer_settings.options)
            {
                if (option.section != current_section)
                {
                    ImGui::TableNextRow();
                    ImGui::TableSetColumnIndex(0);
                    ImGui::Dummy({ 60.f, height_margin });
                    ImGui::Text(option.section.c_str());
                    ImGui::Dummy({ 60.f, height_margin });
                    current_section = option.section;
                }

                ImGui::TableNextRow();
                ImGui::TableSetColumnIndex(1);
                ImGui::Text(option.name.c_str());

                std::string id = format("###option%d", i);
                ImGui::TableSetColumnIndex(2);
                ImGui::Dummy({ 0.f, height_margin });
                ImGui::Dummy({ 2.f, 0.f });
                ImGui::SameLine();
                switch (option.type)
                {
                case IniVarType::Bool:
                    ImGui::Checkbox(id.c_str(), &option.value.b);
                    break;
                case IniVarType::Int:
                    ImGui::InputInt(id.c_str(), &option.value.i, 1, 10);
                    break;
                case IniVarType::Float:
                    ImGui::InputFloat(id.c_str(), &option.value.f, 0.1f, 1.0f, 1);
                    break;
                case IniVarType::String:
                    ImGui::PushItemWidth(option.value.s.size() * ImGui::GetFont()->FontSize / 4.f);
                    ImGui::InputText(id.c_str(), option.value.s.data(), option.value.s.size());
                    ImGui::PopItemWidth();
                    break;
                default:
                    assert(false);
                }

                ++i;
            }

            ImGui::PopStyleColor(2);
            ImGui::EndTable();
        }

        ImGui::PopStyleVar();
        ImGui::End();
    }
}

void show_trace_data(ExtraGuiData& extra, TraceData& trace)
{
    auto name = std::string(format("%s###%d", trace.name.c_str(), trace.gid));

    const float INPUT_TEXT_HEIGHT = 20.f;
    trace_show_top_bar(extra, trace);
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
        send_str(extra.network_data, trace.id, trace.command_line.data());

    ImGui::PopItemWidth();
}

void trace_show_top_bar(ExtraGuiData& extra, TraceData& trace)
{
    auto size = ImGui::GetContentRegionAvail();
    const float bar_size_y = 20.f;

    if (begin_dropdown("file", "file", { 50.f, bar_size_y }, false))
    {
        ImGui::PushStyleColor(ImGuiCol_Button, { 0.f, 0.f, 0.f, 0.f });
        ImGui::PushStyleColor(ImGuiCol_ButtonHovered, { 0.3f, 0.3f, 0.3f, 0.4f });
        ImGui::PushStyleColor(ImGuiCol_ButtonActive, { 0.4f, 0.4f, 0.4f, 0.7f });
        if (ImGui::Button("export"))
        {
            trace.export_open = true;
            gui_engine::file_selector::reset(trace.export_file_selector);
            ImGui::CloseCurrentPopup();
        }

        if (ImGui::Button("import"))
        {
            extra.import_open = true;
            gui_engine::file_selector::reset(extra.import_file_selector);
            ImGui::CloseCurrentPopup();
        }

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
        // TODO: Check if client id already exists and reconnect if so.
        auto it = std::find_if(extra.traces.begin(), extra.traces.end(), [&evt](TraceData const& td) -> bool {
            return td.id == evt.peer_id;
        });

        if (it == extra.traces.end())
        {
            extra.log.push_back(format("new client connected: %d", evt.peer_id));
            TraceData td{ extra.next_gid++, evt.peer_id, format("%f", ImGui::GetTime()), exe_path, csv_regex };
            td.connected = true;
            extra.traces.push_back(td);
        }
        else
            it->connected = true;

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
    extra.traces.push_back({ extra.next_gid++, 255555, "test", exe_path, csv_regex });
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
