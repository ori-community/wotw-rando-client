#pragma once
#include <Modloader/app/structs/IVROverlay_SetHighQualityOverlay.h>
#include <Modloader/app/structs/IVROverlay_SetHighQualityOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetHighQualityOverlay {
        inline app::IVROverlay_SetHighQualityOverlay__Class** type_info() {
            static app::IVROverlay_SetHighQualityOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetHighQualityOverlay__Class**)(modloader::win::memory::resolve_rva(0x04771858));
            }
            return cache;
        }
        inline app::IVROverlay_SetHighQualityOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetHighQualityOverlay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetHighQualityOverlay");
        }
        inline app::IVROverlay_SetHighQualityOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_SetHighQualityOverlay>(get_class());
        }
    } // namespace IVROverlay_SetHighQualityOverlay
} // namespace app::classes::types
