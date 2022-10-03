#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUITexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUITexture__Class** type_info;
        inline app::GUITexture__Class* get_class() {
            return il2cpp::get_class<app::GUITexture__Class>(type_info, "UnityEngine", "GUITexture");
        }
        inline app::GUITexture* create() {
            return il2cpp::create_object<app::GUITexture>(get_class());
        }
    } // namespace GUITexture
} // namespace app::classes::types
