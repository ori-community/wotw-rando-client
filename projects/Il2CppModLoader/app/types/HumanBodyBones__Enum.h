#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HumanBodyBones__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HumanBodyBones__Enum__Class** type_info;
        inline app::HumanBodyBones__Enum__Class* get_class() {
            return il2cpp::get_class<app::HumanBodyBones__Enum__Class>(type_info, "UnityEngine", "HumanBodyBones");
        }
        inline app::HumanBodyBones__Enum* create() {
            return il2cpp::create_object<app::HumanBodyBones__Enum>(get_class());
        }
    } // namespace HumanBodyBones__Enum
} // namespace app::classes::types
