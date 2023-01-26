#pragma once
#include <Modloader/app/structs/CameraTargetSettings__Array.h>
#include <Modloader/app/structs/CameraTargetSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraTargetSettings__Array {
        inline app::CameraTargetSettings__Array__Class** type_info() {
            static app::CameraTargetSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraTargetSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraTargetSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraTargetSettings__Array__Class>(type_info(), "Moon", "CameraTargetSettings[]");
        }
        inline app::CameraTargetSettings__Array* create() {
            return il2cpp::create_object<app::CameraTargetSettings__Array>(get_class());
        }
    } // namespace CameraTargetSettings__Array
} // namespace app::classes::types
