#pragma once
#include <Modloader/app/structs/VREvent_Chaperone_t.h>
#include <Modloader/app/structs/VREvent_Chaperone_t__Boxed.h>
#include <Modloader/app/structs/VREvent_Chaperone_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VREvent_Chaperone_t {
        inline app::VREvent_Chaperone_t__Class** type_info() {
            static app::VREvent_Chaperone_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VREvent_Chaperone_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VREvent_Chaperone_t__Class* get_class() {
            return il2cpp::get_class<app::VREvent_Chaperone_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VREvent_Chaperone_t");
        }
        inline app::VREvent_Chaperone_t* create() {
            return il2cpp::create_object<app::VREvent_Chaperone_t>(get_class());
        }
        inline app::VREvent_Chaperone_t__Boxed* box(app::VREvent_Chaperone_t value) {
            return il2cpp::box_value<app::VREvent_Chaperone_t__Boxed>(get_class(), value);
        }
    } // namespace VREvent_Chaperone_t
} // namespace app::classes::types
