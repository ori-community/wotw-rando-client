#pragma once
#include <Modloader/app/structs/VRControllerAxis_t.h>
#include <Modloader/app/structs/VRControllerAxis_t__Boxed.h>
#include <Modloader/app/structs/VRControllerAxis_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VRControllerAxis_t {
        inline app::VRControllerAxis_t__Class** type_info() {
            static app::VRControllerAxis_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VRControllerAxis_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VRControllerAxis_t__Class* get_class() {
            return il2cpp::get_class<app::VRControllerAxis_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VRControllerAxis_t");
        }
        inline app::VRControllerAxis_t* create() {
            return il2cpp::create_object<app::VRControllerAxis_t>(get_class());
        }
        inline app::VRControllerAxis_t__Boxed* box(app::VRControllerAxis_t value) {
            return il2cpp::box_value<app::VRControllerAxis_t__Boxed>(get_class(), value);
        }
    } // namespace VRControllerAxis_t
} // namespace app::classes::types
