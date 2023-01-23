#pragma once

#include <Core/macros.h>
#include <Modloader/app/structs/MessageProvider.h>

#include <string>
#include <vector>

namespace text_database {
    CORE_DLLEXPORT void register_text(int id, std::string_view text);
    CORE_DLLEXPORT void register_text(int id, std::wstring_view text);
    CORE_DLLEXPORT void clear_text(int id);

    CORE_DLLEXPORT bool has_text(int id);
    CORE_DLLEXPORT int get_text_count(int id);
    CORE_DLLEXPORT std::string_view get_text(int id, int i = 0);
    CORE_DLLEXPORT std::wstring get_text_w(int id, int i = 0);
    CORE_DLLEXPORT std::vector<std::string> const& get_all_text(int id);
    CORE_DLLEXPORT app::MessageProvider* get_provider(int id);
} // namespace text_database

CORE_C_DLLEXPORT void text_database_clear_dynamic();
