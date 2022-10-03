#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VRControllerState_t_Packed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VRControllerState_t_Packed__Class** type_info;
        inline app::VRControllerState_t_Packed__Class* get_class() {
            return il2cpp::get_class<app::VRControllerState_t_Packed__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VRControllerState_t_Packed");
        }
        inline app::VRControllerState_t_Packed* create() {
            return il2cpp::create_object<app::VRControllerState_t_Packed>(get_class());
        }
        inline app::VRControllerState_t_Packed__Boxed* box(app::VRControllerState_t_Packed value) {
            return il2cpp::box_value<app::VRControllerState_t_Packed__Boxed>(get_class(), value);
        }
    } // namespace VRControllerState_t_Packed
} // namespace app::classes::types
