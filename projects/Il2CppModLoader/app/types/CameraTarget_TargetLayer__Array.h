#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraTarget_TargetLayer__Array {
        namespace {
            inline app::CameraTarget_TargetLayer__Array__Class* type_info_ref = nullptr;
        }
        inline app::CameraTarget_TargetLayer__Array__Class** type_info = &type_info_ref;
        inline app::CameraTarget_TargetLayer__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraTarget_TargetLayer__Array__Class>(type_info, "", "CameraTarget+TargetLayer[]");
        }
        inline app::CameraTarget_TargetLayer__Array* create() {
            return il2cpp::create_object<app::CameraTarget_TargetLayer__Array>(get_class());
        }
    } // namespace CameraTarget_TargetLayer__Array
} // namespace app::classes::types
