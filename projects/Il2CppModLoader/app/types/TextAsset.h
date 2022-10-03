#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextAsset {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextAsset__Class** type_info;
        inline app::TextAsset__Class* get_class() {
            return il2cpp::get_class<app::TextAsset__Class>(type_info, "UnityEngine", "TextAsset");
        }
        inline app::TextAsset* create() {
            return il2cpp::create_object<app::TextAsset>(get_class());
        }
    } // namespace TextAsset
} // namespace app::classes::types
