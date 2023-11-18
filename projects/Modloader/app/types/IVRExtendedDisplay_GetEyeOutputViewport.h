#pragma once
#include <Modloader/app/structs/IVRExtendedDisplay_GetEyeOutputViewport.h>
#include <Modloader/app/structs/IVRExtendedDisplay_GetEyeOutputViewport__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRExtendedDisplay_GetEyeOutputViewport {
        inline app::IVRExtendedDisplay_GetEyeOutputViewport__Class** type_info() {
            static app::IVRExtendedDisplay_GetEyeOutputViewport__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRExtendedDisplay_GetEyeOutputViewport__Class**)(modloader::win::memory::resolve_rva(0x0470A300));
            }
            return cache;
        }
        inline app::IVRExtendedDisplay_GetEyeOutputViewport__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRExtendedDisplay_GetEyeOutputViewport__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRExtendedDisplay", "_GetEyeOutputViewport");
        }
        inline app::IVRExtendedDisplay_GetEyeOutputViewport* create() {
            return il2cpp::create_object<app::IVRExtendedDisplay_GetEyeOutputViewport>(get_class());
        }
    } // namespace IVRExtendedDisplay_GetEyeOutputViewport
} // namespace app::classes::types
