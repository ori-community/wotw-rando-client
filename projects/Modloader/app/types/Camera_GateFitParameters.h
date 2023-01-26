#pragma once
#include <Modloader/app/structs/Camera_GateFitParameters.h>
#include <Modloader/app/structs/Camera_GateFitParameters__Boxed.h>
#include <Modloader/app/structs/Camera_GateFitParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Camera_GateFitParameters {
        inline app::Camera_GateFitParameters__Class** type_info() {
            static app::Camera_GateFitParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Camera_GateFitParameters__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Camera_GateFitParameters__Class* get_class() {
            return il2cpp::get_nested_class<app::Camera_GateFitParameters__Class>(type_info(), "UnityEngine", "Camera", "GateFitParameters");
        }
        inline app::Camera_GateFitParameters* create() {
            return il2cpp::create_object<app::Camera_GateFitParameters>(get_class());
        }
        inline app::Camera_GateFitParameters__Boxed* box(app::Camera_GateFitParameters value) {
            return il2cpp::box_value<app::Camera_GateFitParameters__Boxed>(get_class(), value);
        }
    } // namespace Camera_GateFitParameters
} // namespace app::classes::types
