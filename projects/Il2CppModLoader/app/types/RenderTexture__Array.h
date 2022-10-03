#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderTexture__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderTexture__Array__Class** type_info;
        inline app::RenderTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderTexture__Array__Class>(type_info, "UnityEngine", "RenderTexture[]");
        }
        inline app::RenderTexture__Array* create() {
            return il2cpp::create_object<app::RenderTexture__Array>(get_class());
        }
    } // namespace RenderTexture__Array
} // namespace app::classes::types
