#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureFormat__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextureFormat__Enum__Class** type_info;
        inline app::TextureFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureFormat__Enum__Class>(type_info, "UnityEngine", "TextureFormat");
        }
        inline app::TextureFormat__Enum* create() {
            return il2cpp::create_object<app::TextureFormat__Enum>(get_class());
        }
    } // namespace TextureFormat__Enum
} // namespace app::classes::types
