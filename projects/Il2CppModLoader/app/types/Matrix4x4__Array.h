#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Matrix4x4__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Matrix4x4__Array__Class** type_info;
        inline app::Matrix4x4__Array__Class* get_class() {
            return il2cpp::get_class<app::Matrix4x4__Array__Class>(type_info, "UnityEngine", "Matrix4x4[]");
        }
        inline app::Matrix4x4__Array* create() {
            return il2cpp::create_object<app::Matrix4x4__Array>(get_class());
        }
    } // namespace Matrix4x4__Array
} // namespace app::classes::types
