#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArgumentCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArgumentCache__Class** type_info;
        inline app::ArgumentCache__Class* get_class() {
            return il2cpp::get_class<app::ArgumentCache__Class>(type_info, "UnityEngine.Events", "ArgumentCache");
        }
        inline app::ArgumentCache* create() {
            return il2cpp::create_object<app::ArgumentCache>(get_class());
        }
    } // namespace ArgumentCache
} // namespace app::classes::types
