#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformType__Class.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformType.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTransformType {
        inline app::IVROverlay_GetOverlayTransformType__Class** type_info = (app::IVROverlay_GetOverlayTransformType__Class**)(modloader::win::memory::resolve_rva(0x04709C40));
        inline app::IVROverlay_GetOverlayTransformType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTransformType__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTransformType");
        }
        inline app::IVROverlay_GetOverlayTransformType* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTransformType>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTransformType
} // namespace app::classes::types
