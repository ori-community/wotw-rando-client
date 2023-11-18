#pragma once
#include <Modloader/app/structs/IVRCompositor_SetTrackingSpace.h>
#include <Modloader/app/structs/IVRCompositor_SetTrackingSpace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_SetTrackingSpace {
        inline app::IVRCompositor_SetTrackingSpace__Class** type_info() {
            static app::IVRCompositor_SetTrackingSpace__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_SetTrackingSpace__Class**)(modloader::win::memory::resolve_rva(0x04782328));
            }
            return cache;
        }
        inline app::IVRCompositor_SetTrackingSpace__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_SetTrackingSpace__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_SetTrackingSpace");
        }
        inline app::IVRCompositor_SetTrackingSpace* create() {
            return il2cpp::create_object<app::IVRCompositor_SetTrackingSpace>(get_class());
        }
    } // namespace IVRCompositor_SetTrackingSpace
} // namespace app::classes::types
