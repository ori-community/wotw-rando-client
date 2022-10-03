#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderTexture__Class** type_info;
        inline app::RenderTexture__Class* get_class() {
            return il2cpp::get_class<app::RenderTexture__Class>(type_info, "UnityEngine", "RenderTexture");
        }
        inline app::RenderTexture* create() {
            return il2cpp::create_object<app::RenderTexture>(get_class());
        }
        inline app::RenderTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderTexture__Array>(get_class(), size);
        }
    } // namespace RenderTexture
} // namespace app::classes::types
