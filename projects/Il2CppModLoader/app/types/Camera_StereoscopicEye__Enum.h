#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Camera_StereoscopicEye__Enum {
        namespace {
            inline app::Camera_StereoscopicEye__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Camera_StereoscopicEye__Enum__Class** type_info = &type_info_ref;
        inline app::Camera_StereoscopicEye__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Camera_StereoscopicEye__Enum__Class>(type_info, "UnityEngine", "Camera", "StereoscopicEye");
        }
        inline app::Camera_StereoscopicEye__Enum* create() {
            return il2cpp::create_object<app::Camera_StereoscopicEye__Enum>(get_class());
        }
    } // namespace Camera_StereoscopicEye__Enum
} // namespace app::classes::types
