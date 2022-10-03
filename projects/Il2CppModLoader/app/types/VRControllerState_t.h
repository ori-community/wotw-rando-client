#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VRControllerState_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VRControllerState_t__Class** type_info;
        inline app::VRControllerState_t__Class* get_class() {
            return il2cpp::get_class<app::VRControllerState_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VRControllerState_t");
        }
        inline app::VRControllerState_t* create() {
            return il2cpp::create_object<app::VRControllerState_t>(get_class());
        }
        inline app::VRControllerState_t__Boxed* box(app::VRControllerState_t value) {
            return il2cpp::box_value<app::VRControllerState_t__Boxed>(get_class(), value);
        }
    } // namespace VRControllerState_t
} // namespace app::classes::types
