#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_ClearOverlayTexture {
        inline app::IVROverlay_ClearOverlayTexture__Class** type_info = (app::IVROverlay_ClearOverlayTexture__Class**)(modloader::win::memory::resolve_rva(0x04705B30));
        inline app::IVROverlay_ClearOverlayTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ClearOverlayTexture__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ClearOverlayTexture");
        }
        inline app::IVROverlay_ClearOverlayTexture* create() {
            return il2cpp::create_object<app::IVROverlay_ClearOverlayTexture>(get_class());
        }
    } // namespace IVROverlay_ClearOverlayTexture
} // namespace app::classes::types
