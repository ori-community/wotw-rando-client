#pragma once
#include <Modloader/app/structs/CameraTarget_TargetLayer__Array.h>
#include <Modloader/app/structs/CameraTarget_TargetLayer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraTarget_TargetLayer__Array {
        inline app::CameraTarget_TargetLayer__Array__Class** type_info() {
            static app::CameraTarget_TargetLayer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraTarget_TargetLayer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraTarget_TargetLayer__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraTarget_TargetLayer__Array__Class>(type_info(), "", "CameraTarget+TargetLayer[]");
        }
        inline app::CameraTarget_TargetLayer__Array* create() {
            return il2cpp::create_object<app::CameraTarget_TargetLayer__Array>(get_class());
        }
    } // namespace CameraTarget_TargetLayer__Array
} // namespace app::classes::types
