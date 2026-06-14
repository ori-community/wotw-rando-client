#pragma once
#include <Modloader/app/structs/VREvent_t.h>
#include <Modloader/app/structs/VREvent_t__Boxed.h>
#include <Modloader/app/structs/VREvent_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VREvent_t {
        inline app::VREvent_t__Class** type_info() {
            static app::VREvent_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VREvent_t__Class**)(modloader::win::memory::resolve_rva(0x0470F4D0));
            }
            return cache;
        }
        inline app::VREvent_t__Class* get_class() {
            return il2cpp::get_class<app::VREvent_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VREvent_t");
        }
        inline app::VREvent_t* create() {
            return il2cpp::create_object<app::VREvent_t>(get_class());
        }
        inline app::VREvent_t__Boxed* box(app::VREvent_t value) {
            return il2cpp::box_value<app::VREvent_t__Boxed>(get_class(), value);
        }
    } // namespace VREvent_t
} // namespace app::classes::types
