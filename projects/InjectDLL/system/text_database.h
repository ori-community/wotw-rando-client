#pragma once

#include <macros.h>
#include <system/static_text_entries.h>

#include <string>
#include <vector>

namespace text_database
{
    void register_text(int id, std::string_view text);
    void register_text(int id, std::wstring_view text);
    void clear_text(int id);

    bool has_text(int id);
    int get_text_count(int id);
    std::string_view get_text(int id, int i = 0);
    std::wstring get_text_w(int id, int i = 0);
    std::vector<std::string> const& get_all_text(int id);
    app::MessageProvider* get_provider(int id);
}

INJECT_C_DLLEXPORT void text_database_clear_dynamic();
