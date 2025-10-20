#pragma once

#include <Core/enums/text_id.h>
#include <Core/macros.h>
#include <Modloader/app/structs/MessageProvider.h>

#include <string>
#include <vector>

namespace core::text {
    CORE_DLLEXPORT void register_text(TextID id, std::string_view text);
    CORE_DLLEXPORT void register_text(TextID id, std::wstring_view text);
    CORE_DLLEXPORT void clear_text(TextID id);

    CORE_DLLEXPORT bool has_text(TextID id);
    CORE_DLLEXPORT int get_text_count(TextID id);
    CORE_DLLEXPORT std::string_view get_text(TextID id, int i = 0);
    CORE_DLLEXPORT std::wstring get_text_w(TextID id, int i = 0);
    CORE_DLLEXPORT std::vector<std::string> const& get_all_text(TextID id);
    CORE_DLLEXPORT std::string get_concatenated_text(TextID id, std::string_view delimiter);
    CORE_DLLEXPORT std::string_view get_random_text(TextID id);
    CORE_DLLEXPORT std::string_view get_random_text_with_hash(TextID id, std::size_t hash);
    CORE_DLLEXPORT app::MessageProvider* get_provider(TextID id, int i = 0);
    CORE_DLLEXPORT app::MessageProvider* get_random_provider(TextID id);
} // namespace core::text
