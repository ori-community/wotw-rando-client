#pragma once
#include <Modloader/app/structs/IVROverlay_FindOverlay.h>
#include <Modloader/app/structs/IVROverlay_FindOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_FindOverlay {
        inline app::IVROverlay_FindOverlay__Class** type_info() {
            static app::IVROverlay_FindOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_FindOverlay__Class**)(modloader::win::memory::resolve_rva(0x0471BBF0));
            }
            return cache;
        }
        inline app::IVROverlay_FindOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_FindOverlay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_FindOverlay");
        }
        inline app::IVROverlay_FindOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_FindOverlay>(get_class());
        }
    } // namespace IVROverlay_FindOverlay
} // namespace app::classes::types
