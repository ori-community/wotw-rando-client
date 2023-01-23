#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTextureBounds__Class.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTextureBounds.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTextureBounds {
        inline app::IVROverlay_SetOverlayTextureBounds__Class** type_info = (app::IVROverlay_SetOverlayTextureBounds__Class**)(modloader::win::memory::resolve_rva(0x04740570));
        inline app::IVROverlay_SetOverlayTextureBounds__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTextureBounds__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTextureBounds");
        }
        inline app::IVROverlay_SetOverlayTextureBounds* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTextureBounds>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTextureBounds
} // namespace app::classes::types
