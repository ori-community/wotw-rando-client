#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTexture__Class.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTexture.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTexture {
        inline app::IVROverlay_SetOverlayTexture__Class** type_info = (app::IVROverlay_SetOverlayTexture__Class**)(modloader::win::memory::resolve_rva(0x0474ADD8));
        inline app::IVROverlay_SetOverlayTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTexture__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTexture");
        }
        inline app::IVROverlay_SetOverlayTexture* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTexture>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTexture
} // namespace app::classes::types
