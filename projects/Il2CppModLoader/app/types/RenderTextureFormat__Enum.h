#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderTextureFormat__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderTextureFormat__Enum__Class** type_info;
        inline app::RenderTextureFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderTextureFormat__Enum__Class>(type_info, "UnityEngine", "RenderTextureFormat");
        }
        inline app::RenderTextureFormat__Enum* create() {
            return il2cpp::create_object<app::RenderTextureFormat__Enum>(get_class());
        }
        inline app::RenderTextureFormat__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderTextureFormat__Enum__Array>(get_class(), size);
        }
        inline app::RenderTextureFormat__Enum__Array* create_array(const std::vector<app::RenderTextureFormat__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::RenderTextureFormat__Enum__Array>(get_class(), items);
        }
    } // namespace RenderTextureFormat__Enum
} // namespace app::classes::types
