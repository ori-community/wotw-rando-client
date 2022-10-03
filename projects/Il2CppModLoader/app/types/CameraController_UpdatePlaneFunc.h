#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraController_UpdatePlaneFunc {
        namespace {
            app::CameraController_UpdatePlaneFunc__Class* type_info_ref = nullptr;
        }
        app::CameraController_UpdatePlaneFunc__Class** type_info = &type_info_ref;
        inline app::CameraController_UpdatePlaneFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraController_UpdatePlaneFunc__Class>(type_info, "", "CameraController", "UpdatePlaneFunc");
        }
        inline app::CameraController_UpdatePlaneFunc* create() {
            return il2cpp::create_object<app::CameraController_UpdatePlaneFunc>(get_class());
        }
    } // namespace CameraController_UpdatePlaneFunc
} // namespace app::classes::types
