#pragma once

#include <gui/imgui.h>
#include <gui_helpers/dropdown.h>

#include <string>
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

struct TraceData
{
    TraceData(int p_gid, int p_id, std::string const& p_name)
        : name(p_name)
        , gid(p_gid)
        , id(p_id)
        , show_filters(true)
        , open(true)
        , connected(false)
        , init(false)
        , min_level_filter(0, { 1, 2, 3, 4, 5 })
        , max_level_filter(2, { 1, 2, 3, 4, 5 })
        , group_filter{ 0 }
        , text_filter{ 0 }
        , messages()
    {}

    int gid;
    int id;
    std::string name;
    bool show_filters;
    bool auto_scroll;
    bool open;
    bool connected;
    bool init;

    ImVec2 info_window;
    float column_widths[5];
    int prev_entry_count;

    // Filters
    Dropdown<int> min_level_filter;
    Dropdown<int> max_level_filter;
    char group_filter[64];
    char text_filter[256];
    bool show_type[4];

    // Messages
    std::vector<Message> messages;
};

struct GuiData
{
    int next_gid = 10;
    bool running = true;
    ImVec2 window_size = { 1280.f, 720.f };
    int prev_log_count = 0;
    std::vector<std::string> log;

    std::vector<TraceData> traces;
};
