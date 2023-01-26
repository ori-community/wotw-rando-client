#pragma once
#include <Modloader/app/structs/CameraProperties.h>
#include <Modloader/app/structs/CameraProperties__Boxed.h>
#include <Modloader/app/structs/CameraProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraProperties {
        inline app::CameraProperties__Class** type_info() {
            static app::CameraProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraProperties__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraProperties__Class* get_class() {
            return il2cpp::get_class<app::CameraProperties__Class>(type_info(), "UnityEngine.Experimental.Rendering", "CameraProperties");
        }
        inline app::CameraProperties* create() {
            return il2cpp::create_object<app::CameraProperties>(get_class());
        }
        inline app::CameraProperties__Boxed* box(app::CameraProperties value) {
            return il2cpp::box_value<app::CameraProperties__Boxed>(get_class(), value);
        }
    } // namespace CameraProperties
} // namespace app::classes::types
