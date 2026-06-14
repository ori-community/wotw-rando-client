#pragma once
#include <Modloader/app/structs/CVRSystem_GetControllerStateUnion.h>
#include <Modloader/app/structs/CVRSystem_GetControllerStateUnion__Boxed.h>
#include <Modloader/app/structs/CVRSystem_GetControllerStateUnion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRSystem_GetControllerStateUnion {
        inline app::CVRSystem_GetControllerStateUnion__Class** type_info() {
            static app::CVRSystem_GetControllerStateUnion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CVRSystem_GetControllerStateUnion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CVRSystem_GetControllerStateUnion__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRSystem_GetControllerStateUnion__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRSystem", "GetControllerStateUnion");
        }
        inline app::CVRSystem_GetControllerStateUnion* create() {
            return il2cpp::create_object<app::CVRSystem_GetControllerStateUnion>(get_class());
        }
        inline app::CVRSystem_GetControllerStateUnion__Boxed* box(app::CVRSystem_GetControllerStateUnion value) {
            return il2cpp::box_value<app::CVRSystem_GetControllerStateUnion__Boxed>(get_class(), value);
        }
    } // namespace CVRSystem_GetControllerStateUnion
} // namespace app::classes::types
