#pragma once
#include <Modloader/app/structs/IVROverlay_GetHighQualityOverlay.h>
#include <Modloader/app/structs/IVROverlay_GetHighQualityOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetHighQualityOverlay {
        inline app::IVROverlay_GetHighQualityOverlay__Class** type_info() {
            static app::IVROverlay_GetHighQualityOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetHighQualityOverlay__Class**)(modloader::win::memory::resolve_rva(0x04717DF0));
            }
            return cache;
        }
        inline app::IVROverlay_GetHighQualityOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetHighQualityOverlay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetHighQualityOverlay");
        }
        inline app::IVROverlay_GetHighQualityOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_GetHighQualityOverlay>(get_class());
        }
    } // namespace IVROverlay_GetHighQualityOverlay
} // namespace app::classes::types
