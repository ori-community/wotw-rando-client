#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Compositor_OverlaySettings {
        namespace {
            app::Compositor_OverlaySettings__Class* type_info_ref = nullptr;
        }
        app::Compositor_OverlaySettings__Class** type_info = &type_info_ref;
        inline app::Compositor_OverlaySettings__Class* get_class() {
            return il2cpp::get_class<app::Compositor_OverlaySettings__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "Compositor_OverlaySettings");
        }
        inline app::Compositor_OverlaySettings* create() {
            return il2cpp::create_object<app::Compositor_OverlaySettings>(get_class());
        }
        inline app::Compositor_OverlaySettings__Boxed* box(app::Compositor_OverlaySettings value) {
            return il2cpp::box_value<app::Compositor_OverlaySettings__Boxed>(get_class(), value);
        }
    } // namespace Compositor_OverlaySettings
} // namespace app::classes::types
