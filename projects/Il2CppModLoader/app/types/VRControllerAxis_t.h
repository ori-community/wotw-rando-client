#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VRControllerAxis_t {
        namespace {
            app::VRControllerAxis_t__Class* type_info_ref = nullptr;
        }
        app::VRControllerAxis_t__Class** type_info = &type_info_ref;
        inline app::VRControllerAxis_t__Class* get_class() {
            return il2cpp::get_class<app::VRControllerAxis_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VRControllerAxis_t");
        }
        inline app::VRControllerAxis_t* create() {
            return il2cpp::create_object<app::VRControllerAxis_t>(get_class());
        }
        inline app::VRControllerAxis_t__Boxed* box(app::VRControllerAxis_t value) {
            return il2cpp::box_value<app::VRControllerAxis_t__Boxed>(get_class(), value);
        }
    } // namespace VRControllerAxis_t
} // namespace app::classes::types
