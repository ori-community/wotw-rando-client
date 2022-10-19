#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VREvent_Status_t {
        namespace {
            inline app::VREvent_Status_t__Class* type_info_ref = nullptr;
        }
        inline app::VREvent_Status_t__Class** type_info = &type_info_ref;
        inline app::VREvent_Status_t__Class* get_class() {
            return il2cpp::get_class<app::VREvent_Status_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VREvent_Status_t");
        }
        inline app::VREvent_Status_t* create() {
            return il2cpp::create_object<app::VREvent_Status_t>(get_class());
        }
        inline app::VREvent_Status_t__Boxed* box(app::VREvent_Status_t value) {
            return il2cpp::box_value<app::VREvent_Status_t__Boxed>(get_class(), value);
        }
    } // namespace VREvent_Status_t
} // namespace app::classes::types
