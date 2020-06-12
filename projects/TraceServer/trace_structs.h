#include <gui/imgui.h>
#include <gui_helpers/dropdown.h>

#include <string>
#include <vector>

const ImVec4 MessageTypeColors[3] = {
    { 1.f, 1.f, 1.f, 1.f },
    { 1.f, 1.f, 0.f, 1.f },
    { 1.f, 0.f, 0.f, 1.f }
};

const std::string MessageTypeNames[3] = {
    "info",
    "warning",
    "error",
};

enum class MessageType
{
    Info,
    Warning,
    Error
};

struct Message
{
    int level;
    MessageType type;
    std::string group;
    std::string message;
};

struct TraceData
{
    TraceData(std::string const& p_name)
        : name(p_name)
        , show_filters(true)
        , closed(false)
        , connected(false)
        , init(false)
        , min_level_filter(0, { 1, 2, 3, 4, 5 })
        , max_level_filter(2, { 1, 2, 3, 4, 5 })
        , group_filter{ 0 }
        , messages()
    {}

    std::string name;
    bool show_filters;
    bool auto_scroll;
    bool closed;
    bool connected;
    bool init;

    ImVec2 info_window;
    float column_widths[5];
    int prev_entry_count;

    // Filters
    Dropdown<int> min_level_filter;
    Dropdown<int> max_level_filter;
    char group_filter[64];
    bool show_type[3];

    // Messages
    std::vector<Message> messages;
};

struct GuiData
{
    bool running = true;
    ImVec2 window_size = { 1280.f, 720.f };
    int prev_log_count = 0;
    std::vector<std::string> log;

    std::vector<TraceData> traces;
};
