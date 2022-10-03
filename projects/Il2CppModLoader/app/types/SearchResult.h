#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SearchResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SearchResult__Class** type_info;
        inline app::SearchResult__Class* get_class() {
            return il2cpp::get_class<app::SearchResult__Class>(type_info, "System.IO", "SearchResult");
        }
        inline app::SearchResult* create() {
            return il2cpp::create_object<app::SearchResult>(get_class());
        }
    } // namespace SearchResult
} // namespace app::classes::types
