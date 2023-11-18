#pragma once
#include <Modloader/app/structs/VRControllerState_t.h>
#include <Modloader/app/structs/VRControllerState_t__Boxed.h>
#include <Modloader/app/structs/VRControllerState_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VRControllerState_t {
        inline app::VRControllerState_t__Class** type_info() {
            static app::VRControllerState_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VRControllerState_t__Class**)(modloader::win::memory::resolve_rva(0x047473F0));
            }
            return cache;
        }
        inline app::VRControllerState_t__Class* get_class() {
            return il2cpp::get_class<app::VRControllerState_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VRControllerState_t");
        }
        inline app::VRControllerState_t* create() {
            return il2cpp::create_object<app::VRControllerState_t>(get_class());
        }
        inline app::VRControllerState_t__Boxed* box(app::VRControllerState_t value) {
            return il2cpp::box_value<app::VRControllerState_t__Boxed>(get_class(), value);
        }
    } // namespace VRControllerState_t
} // namespace app::classes::types
