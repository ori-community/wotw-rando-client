#pragma once
#include <Modloader/app/structs/IVROverlay.h>
#include <Modloader/app/structs/IVROverlay__Boxed.h>
#include <Modloader/app/structs/IVROverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay {
        inline app::IVROverlay__Class** type_info() {
            static app::IVROverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay__Class**)(modloader::win::memory::resolve_rva(0x047460D0));
            }
            return cache;
        }
        inline app::IVROverlay__Class* get_class() {
            return il2cpp::get_class<app::IVROverlay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay");
        }
        inline app::IVROverlay* create() {
            return il2cpp::create_object<app::IVROverlay>(get_class());
        }
        inline app::IVROverlay__Boxed* box(app::IVROverlay value) {
            return il2cpp::box_value<app::IVROverlay__Boxed>(get_class(), value);
        }
    } // namespace IVROverlay
} // namespace app::classes::types
