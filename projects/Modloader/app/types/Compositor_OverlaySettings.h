#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Compositor_OverlaySettings__Class.h>
#include <Modloader/app/structs/Compositor_OverlaySettings.h>
#include <Modloader/app/structs/Compositor_OverlaySettings__Boxed.h>

namespace app::classes::types {
    namespace Compositor_OverlaySettings {
        namespace {
            inline app::Compositor_OverlaySettings__Class* type_info_ref = nullptr;
        }
        inline app::Compositor_OverlaySettings__Class** type_info = &type_info_ref;
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
