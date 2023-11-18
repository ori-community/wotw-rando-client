#pragma once
#include <Modloader/app/structs/IVROverlay_ShowMessageOverlay.h>
#include <Modloader/app/structs/IVROverlay_ShowMessageOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_ShowMessageOverlay {
        inline app::IVROverlay_ShowMessageOverlay__Class** type_info() {
            static app::IVROverlay_ShowMessageOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_ShowMessageOverlay__Class**)(modloader::win::memory::resolve_rva(0x04797D80));
            }
            return cache;
        }
        inline app::IVROverlay_ShowMessageOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ShowMessageOverlay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ShowMessageOverlay");
        }
        inline app::IVROverlay_ShowMessageOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_ShowMessageOverlay>(get_class());
        }
    } // namespace IVROverlay_ShowMessageOverlay
} // namespace app::classes::types
