#pragma once

#include <Core/enums/static_text_entries.h>
#include <Core/macros.h>
#include <Modloader/app/structs/MessageProvider.h>

#include <string>
#include <vector>

namespace core::text {
    CORE_DLLEXPORT void register_text(text_id id, std::string_view text);
    CORE_DLLEXPORT void register_text(text_id id, std::wstring_view text);
    CORE_DLLEXPORT void clear_text(text_id id);

    CORE_DLLEXPORT bool has_text(text_id id);
    CORE_DLLEXPORT int get_text_count(text_id id);
    CORE_DLLEXPORT std::string_view get_text(text_id id, int i = 0);
    CORE_DLLEXPORT std::wstring get_text_w(text_id id, int i = 0);
    CORE_DLLEXPORT std::vector<std::string> const& get_all_text(text_id id);
    CORE_DLLEXPORT std::string get_concatenated_text(text_id id, std::string_view delimiter);
    CORE_DLLEXPORT std::string_view get_random_text(text_id id);
    CORE_DLLEXPORT std::string_view get_random_text_with_hash(text_id id, std::size_t hash);
    CORE_DLLEXPORT app::MessageProvider* get_provider(text_id id, text_id i = 0);
    CORE_DLLEXPORT app::MessageProvider* get_random_provider(text_id id);

    CORE_DLLEXPORT int allocate_dynamic();
    CORE_DLLEXPORT void clear_dynamic();
} // namespace core::text
