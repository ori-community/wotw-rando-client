#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Camera_GateFitParameters__Class.h>
#include <Modloader/app/structs/Camera_GateFitParameters.h>
#include <Modloader/app/structs/Camera_GateFitParameters__Boxed.h>

namespace app::classes::types {
    namespace Camera_GateFitParameters {
        namespace {
            inline app::Camera_GateFitParameters__Class* type_info_ref = nullptr;
        }
        inline app::Camera_GateFitParameters__Class** type_info = &type_info_ref;
        inline app::Camera_GateFitParameters__Class* get_class() {
            return il2cpp::get_nested_class<app::Camera_GateFitParameters__Class>(type_info, "UnityEngine", "Camera", "GateFitParameters");
        }
        inline app::Camera_GateFitParameters* create() {
            return il2cpp::create_object<app::Camera_GateFitParameters>(get_class());
        }
        inline app::Camera_GateFitParameters__Boxed* box(app::Camera_GateFitParameters value) {
            return il2cpp::box_value<app::Camera_GateFitParameters__Boxed>(get_class(), value);
        }
    } // namespace Camera_GateFitParameters
} // namespace app::classes::types
