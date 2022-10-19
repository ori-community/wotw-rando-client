#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRSystem_GetControllerStateUnion {
        namespace {
            inline app::CVRSystem_GetControllerStateUnion__Class* type_info_ref = nullptr;
        }
        inline app::CVRSystem_GetControllerStateUnion__Class** type_info = &type_info_ref;
        inline app::CVRSystem_GetControllerStateUnion__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRSystem_GetControllerStateUnion__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRSystem", "GetControllerStateUnion");
        }
        inline app::CVRSystem_GetControllerStateUnion* create() {
            return il2cpp::create_object<app::CVRSystem_GetControllerStateUnion>(get_class());
        }
        inline app::CVRSystem_GetControllerStateUnion__Boxed* box(app::CVRSystem_GetControllerStateUnion value) {
            return il2cpp::box_value<app::CVRSystem_GetControllerStateUnion__Boxed>(get_class(), value);
        }
    } // namespace CVRSystem_GetControllerStateUnion
} // namespace app::classes::types
