#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTexelAspect__Class.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTexelAspect.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTexelAspect {
        inline app::IVROverlay_GetOverlayTexelAspect__Class** type_info = (app::IVROverlay_GetOverlayTexelAspect__Class**)(modloader::win::memory::resolve_rva(0x047945C8));
        inline app::IVROverlay_GetOverlayTexelAspect__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTexelAspect__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTexelAspect");
        }
        inline app::IVROverlay_GetOverlayTexelAspect* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTexelAspect>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTexelAspect
} // namespace app::classes::types
