#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VREvent_Controller_t__Class.h>
#include <Modloader/app/structs/VREvent_Controller_t.h>
#include <Modloader/app/structs/VREvent_Controller_t__Boxed.h>

namespace app::classes::types {
    namespace VREvent_Controller_t {
        namespace {
            inline app::VREvent_Controller_t__Class* type_info_ref = nullptr;
        }
        inline app::VREvent_Controller_t__Class** type_info = &type_info_ref;
        inline app::VREvent_Controller_t__Class* get_class() {
            return il2cpp::get_class<app::VREvent_Controller_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VREvent_Controller_t");
        }
        inline app::VREvent_Controller_t* create() {
            return il2cpp::create_object<app::VREvent_Controller_t>(get_class());
        }
        inline app::VREvent_Controller_t__Boxed* box(app::VREvent_Controller_t value) {
            return il2cpp::box_value<app::VREvent_Controller_t__Boxed>(get_class(), value);
        }
    } // namespace VREvent_Controller_t
} // namespace app::classes::types
