#pragma once

#include <string>
#include <string_view>
#include <Core/macros.h>

#include <Modloader/app/structs/TextStyle.h>
#include <Modloader/app/structs/TextBox.h>

namespace text_style {
    CORE_DLLEXPORT app::TextStyle* create_style(std::string_view name);
    CORE_DLLEXPORT app::TextStyle* create_color_style(std::string const& text);
    CORE_DLLEXPORT app::TextStyle* create_size_style(std::string const& text);
    CORE_DLLEXPORT void create_styles(app::TextBox* box, std::wstring const& text);
} // namespace text_style