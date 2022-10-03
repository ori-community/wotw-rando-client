#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUISkin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUISkin__Class** type_info;
        inline app::GUISkin__Class* get_class() {
            return il2cpp::get_class<app::GUISkin__Class>(type_info, "UnityEngine", "GUISkin");
        }
        inline app::GUISkin* create() {
            return il2cpp::create_object<app::GUISkin>(get_class());
        }
    } // namespace GUISkin
} // namespace app::classes::types
