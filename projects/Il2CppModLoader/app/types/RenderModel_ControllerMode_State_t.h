#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderModel_ControllerMode_State_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderModel_ControllerMode_State_t__Class** type_info;
        inline app::RenderModel_ControllerMode_State_t__Class* get_class() {
            return il2cpp::get_class<app::RenderModel_ControllerMode_State_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "RenderModel_ControllerMode_State_t");
        }
        inline app::RenderModel_ControllerMode_State_t* create() {
            return il2cpp::create_object<app::RenderModel_ControllerMode_State_t>(get_class());
        }
        inline app::RenderModel_ControllerMode_State_t__Boxed* box(app::RenderModel_ControllerMode_State_t value) {
            return il2cpp::box_value<app::RenderModel_ControllerMode_State_t__Boxed>(get_class(), value);
        }
    } // namespace RenderModel_ControllerMode_State_t
} // namespace app::classes::types
