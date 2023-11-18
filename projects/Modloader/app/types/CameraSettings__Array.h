#pragma once
#include <Modloader/app/structs/CameraSettings__Array.h>
#include <Modloader/app/structs/CameraSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSettings__Array {
        inline app::CameraSettings__Array__Class** type_info() {
            static app::CameraSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraSettings__Array__Class>(type_info(), "", "CameraSettings[]");
        }
        inline app::CameraSettings__Array* create() {
            return il2cpp::create_object<app::CameraSettings__Array>(get_class());
        }
    } // namespace CameraSettings__Array
} // namespace app::classes::types
