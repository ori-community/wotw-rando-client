#pragma once
#include <Modloader/app/structs/VROverlayIntersectionResults_t.h>
#include <Modloader/app/structs/VROverlayIntersectionResults_t__Boxed.h>
#include <Modloader/app/structs/VROverlayIntersectionResults_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VROverlayIntersectionResults_t {
        inline app::VROverlayIntersectionResults_t__Class** type_info() {
            static app::VROverlayIntersectionResults_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VROverlayIntersectionResults_t__Class**)(modloader::win::memory::resolve_rva(0x04767BA0));
            }
            return cache;
        }
        inline app::VROverlayIntersectionResults_t__Class* get_class() {
            return il2cpp::get_class<app::VROverlayIntersectionResults_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VROverlayIntersectionResults_t");
        }
        inline app::VROverlayIntersectionResults_t* create() {
            return il2cpp::create_object<app::VROverlayIntersectionResults_t>(get_class());
        }
        inline app::VROverlayIntersectionResults_t__Boxed* box(app::VROverlayIntersectionResults_t value) {
            return il2cpp::box_value<app::VROverlayIntersectionResults_t__Boxed>(get_class(), value);
        }
    } // namespace VROverlayIntersectionResults_t
} // namespace app::classes::types
