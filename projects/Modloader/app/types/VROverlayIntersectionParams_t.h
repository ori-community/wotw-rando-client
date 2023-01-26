#pragma once
#include <Modloader/app/structs/VROverlayIntersectionParams_t.h>
#include <Modloader/app/structs/VROverlayIntersectionParams_t__Boxed.h>
#include <Modloader/app/structs/VROverlayIntersectionParams_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VROverlayIntersectionParams_t {
        inline app::VROverlayIntersectionParams_t__Class** type_info() {
            static app::VROverlayIntersectionParams_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VROverlayIntersectionParams_t__Class**)(modloader::win::memory::resolve_rva(0x04765CD8));
            }
            return cache;
        }
        inline app::VROverlayIntersectionParams_t__Class* get_class() {
            return il2cpp::get_class<app::VROverlayIntersectionParams_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VROverlayIntersectionParams_t");
        }
        inline app::VROverlayIntersectionParams_t* create() {
            return il2cpp::create_object<app::VROverlayIntersectionParams_t>(get_class());
        }
        inline app::VROverlayIntersectionParams_t__Boxed* box(app::VROverlayIntersectionParams_t value) {
            return il2cpp::box_value<app::VROverlayIntersectionParams_t__Boxed>(get_class(), value);
        }
    } // namespace VROverlayIntersectionParams_t
} // namespace app::classes::types
