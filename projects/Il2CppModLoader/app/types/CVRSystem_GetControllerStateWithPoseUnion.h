#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRSystem_GetControllerStateWithPoseUnion {
        namespace {
            app::CVRSystem_GetControllerStateWithPoseUnion__Class* type_info_ref = nullptr;
        }
        app::CVRSystem_GetControllerStateWithPoseUnion__Class** type_info = &type_info_ref;
        inline app::CVRSystem_GetControllerStateWithPoseUnion__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRSystem_GetControllerStateWithPoseUnion__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRSystem", "GetControllerStateWithPoseUnion");
        }
        inline app::CVRSystem_GetControllerStateWithPoseUnion* create() {
            return il2cpp::create_object<app::CVRSystem_GetControllerStateWithPoseUnion>(get_class());
        }
        inline app::CVRSystem_GetControllerStateWithPoseUnion__Boxed* box(app::CVRSystem_GetControllerStateWithPoseUnion value) {
            return il2cpp::box_value<app::CVRSystem_GetControllerStateWithPoseUnion__Boxed>(get_class(), value);
        }
    } // namespace CVRSystem_GetControllerStateWithPoseUnion
} // namespace app::classes::types
