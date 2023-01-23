#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayAlpha__Class.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayAlpha.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayAlpha {
        inline app::IVROverlay_SetOverlayAlpha__Class** type_info = (app::IVROverlay_SetOverlayAlpha__Class**)(modloader::win::memory::resolve_rva(0x0476A390));
        inline app::IVROverlay_SetOverlayAlpha__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayAlpha__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayAlpha");
        }
        inline app::IVROverlay_SetOverlayAlpha* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayAlpha>(get_class());
        }
    } // namespace IVROverlay_SetOverlayAlpha
} // namespace app::classes::types
