#pragma once
#include <Modloader/app/structs/CameraController_UpdatePlaneFunc.h>
#include <Modloader/app/structs/CameraController_UpdatePlaneFunc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraController_UpdatePlaneFunc {
        inline app::CameraController_UpdatePlaneFunc__Class** type_info() {
            static app::CameraController_UpdatePlaneFunc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraController_UpdatePlaneFunc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraController_UpdatePlaneFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraController_UpdatePlaneFunc__Class>(type_info(), "", "CameraController", "UpdatePlaneFunc");
        }
        inline app::CameraController_UpdatePlaneFunc* create() {
            return il2cpp::create_object<app::CameraController_UpdatePlaneFunc>(get_class());
        }
    } // namespace CameraController_UpdatePlaneFunc
} // namespace app::classes::types
