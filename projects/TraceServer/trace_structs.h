#pragma once

#include <settings.h>

#include <GuiEngine/gui/imgui.h>
#include <GuiEngine/gui_helpers/dropdown.h>

#include <WinNetwork/peer.h>

#include <string>
#include <array>
#include <vector>

const ImVec4 MessageTypeColors[4] = {
    { 1.f, 1.f, 1.f, 1.f },
    { 1.f, 1.f, 0.f, 1.f },
    { 1.f, 0.f, 0.f, 1.f },
    { 1.f, 0.f, 1.f, 1.f }
};

const std::string MessageTypeNames[4] = {
    "info",
    "warning",
    "error",
    "debug",
};

enum class MessageType : int
{
    Info,
    Warning,
    Error,
    Debug
};

struct Message
{
    Message()
        : level(1)
        , type(MessageType::Info)
        , group()
        , message()
    {}

    Message(int p_level, MessageType p_type, std::string const & p_group, std::string const& p_message)
        : level(p_level)
        , type(p_type)
        , group(p_group)
        , message(p_message)
    {}

    int level;
    MessageType type;
    std::string group;
    std::string message;
};

struct TraceFilters
{
    TraceFilters()
        : min_level_filter(0)
        , max_level_filter(2)
        , group_filter{ 0 }
        , text_filter{ 0 }
        , show_type{ true, true, true, true }
    {}

    int min_level_filter;
    int max_level_filter;
    std::array<char, 64> group_filter;
    std::array<char, 256> text_filter;
    std::array<bool, 4> show_type;
};

bool operator !=(TraceFilters const& lhs, TraceFilters const& rhs)
{
    return (
        lhs.min_level_filter != rhs.min_level_filter ||
        lhs.max_level_filter != rhs.max_level_filter ||
        lhs.group_filter != rhs.group_filter ||
        lhs.text_filter != rhs.text_filter ||
        lhs.show_type != rhs.show_type
    );
}

struct TraceData
{
    TraceData(int p_gid, int p_id, std::string const& p_name)
        : name(p_name)
        , gid(p_gid)
        , id(p_id)
        , show_filters(true)
        , auto_scroll(true)
        , do_scroll(false)
        , open(true)
        , connected(false)
        , init(false)
        , command_line()
        , filter()
        , min_dropdown(&filter.min_level_filter, { 1, 2, 3, 4, 5 })
        , max_dropdown(&filter.max_level_filter, { 1, 2, 3, 4, 5 })
        , messages()
        , filtered_messages()
    {}

    int gid;
    int id;
    std::string name;
    bool show_filters;
    bool auto_scroll;
    bool do_scroll;
    bool open;
    bool connected;
    bool init;
    std::array<char, 128> command_line;

    ImVec2 info_window;

    // Filters
    TraceFilters filter;
    gui_engine::Dropdown<int> min_dropdown;
    gui_engine::Dropdown<int> max_dropdown;

    // Messages
    std::vector<Message> messages;
    std::vector<size_t> filtered_messages;
};

struct ExtraGuiData
{
    bool randomizer_settings_open = false;
    IniSettings randomizer_settings;
    IniSettings randomizer_settings_backup;
    network::NetworkData network_data;

    int next_gid = 10;
    int prev_log_count = 0;
    std::vector<std::string> log;

    std::vector<TraceData> traces;
};
