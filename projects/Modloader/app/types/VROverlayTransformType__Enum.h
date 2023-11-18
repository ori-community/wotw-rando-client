#pragma once
#include <Modloader/app/structs/VROverlayTransformType__Enum.h>
#include <Modloader/app/structs/VROverlayTransformType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VROverlayTransformType__Enum {
        inline app::VROverlayTransformType__Enum__Class** type_info() {
            static app::VROverlayTransformType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VROverlayTransformType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04721A28));
            }
            return cache;
        }
        inline app::VROverlayTransformType__Enum__Class* get_class() {
            return il2cpp::get_class<app::VROverlayTransformType__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VROverlayTransformType");
        }
        inline app::VROverlayTransformType__Enum* create() {
            return il2cpp::create_object<app::VROverlayTransformType__Enum>(get_class());
        }
    } // namespace VROverlayTransformType__Enum
} // namespace app::classes::types
