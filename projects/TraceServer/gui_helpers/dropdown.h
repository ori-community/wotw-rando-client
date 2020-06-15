#pragma once

#include <vector>

struct ImVec2;

template<typename T>
struct Dropdown
{
    Dropdown(int* p_selected, std::vector<T> const& p_values)
        : values(p_values)
        , selected(p_selected)
        , open(false)
    {}

    std::vector<T> values;
    int* selected;
    bool open;
};

bool begin_dropdown(char const* id, char const* label, ImVec2 const& b_size);
void end_dropdown();
