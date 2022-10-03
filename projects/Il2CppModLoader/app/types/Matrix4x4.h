#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Matrix4x4 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Matrix4x4__Class** type_info;
        inline app::Matrix4x4__Class* get_class() {
            return il2cpp::get_class<app::Matrix4x4__Class>(type_info, "UnityEngine", "Matrix4x4");
        }
        inline app::Matrix4x4* create() {
            return il2cpp::create_object<app::Matrix4x4>(get_class());
        }
        inline app::Matrix4x4__Boxed* box(app::Matrix4x4 value) {
            return il2cpp::box_value<app::Matrix4x4__Boxed>(get_class(), value);
        }
        inline app::Matrix4x4__Array* create_array(int size) {
            return il2cpp::array_new<app::Matrix4x4__Array>(get_class(), size);
        }
    } // namespace Matrix4x4
} // namespace app::classes::types
