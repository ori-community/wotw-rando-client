#pragma once

#include <string>
#include <string_view>

namespace text_style {
    app::TextStyle* create_style(std::string_view name);
    app::TextStyle* create_color_style(std::string const& text);
    app::TextStyle* create_size_style(std::string const& text);
    void create_styles(app::TextBox* box, std::wstring const& text);
}