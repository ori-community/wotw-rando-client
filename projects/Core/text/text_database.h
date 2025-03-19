#pragma once

#include <Core/enums/static_text_entries.h>
#include <Core/macros.h>
#include <Modloader/app/structs/MessageProvider.h>

#include <string>
#include <vector>

namespace core::text {
    CORE_DLLEXPORT void reset_to_default_values();
    CORE_DLLEXPORT void register_text(static_text_entry id, std::string_view text);
    CORE_DLLEXPORT void register_text(static_text_entry id, std::wstring_view text);
    CORE_DLLEXPORT void clear_text(static_text_entry id);

    CORE_DLLEXPORT bool has_text(static_text_entry id);
    CORE_DLLEXPORT int get_text_count(static_text_entry id);
    CORE_DLLEXPORT std::string_view get_text(static_text_entry id, int i = 0);
    CORE_DLLEXPORT std::wstring get_text_w(static_text_entry id, int i = 0);
    CORE_DLLEXPORT std::vector<std::string> const& get_all_text(static_text_entry id);
    CORE_DLLEXPORT std::string get_concatenated_text(static_text_entry id, std::string_view delimiter);
    CORE_DLLEXPORT std::string_view get_random_text(static_text_entry id);
    CORE_DLLEXPORT std::string_view get_random_text_with_hash(static_text_entry id, std::size_t hash);
    CORE_DLLEXPORT app::MessageProvider* get_provider(static_text_entry id, int i = 0);
    CORE_DLLEXPORT app::MessageProvider* get_random_provider(static_text_entry id);
} // namespace core::text
