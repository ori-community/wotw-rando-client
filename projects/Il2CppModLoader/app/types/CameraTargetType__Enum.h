#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraTargetType__Enum {
        namespace {
            app::CameraTargetType__Enum__Class* type_info_ref = nullptr;
        }
        app::CameraTargetType__Enum__Class** type_info = &type_info_ref;
        inline app::CameraTargetType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CameraTargetType__Enum__Class>(type_info, "", "CameraTargetType");
        }
        inline app::CameraTargetType__Enum* create() {
            return il2cpp::create_object<app::CameraTargetType__Enum>(get_class());
        }
    } // namespace CameraTargetType__Enum
} // namespace app::classes::types
