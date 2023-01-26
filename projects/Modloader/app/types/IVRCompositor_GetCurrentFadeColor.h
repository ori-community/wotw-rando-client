#pragma once
#include <Modloader/app/structs/IVRCompositor_GetCurrentFadeColor.h>
#include <Modloader/app/structs/IVRCompositor_GetCurrentFadeColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetCurrentFadeColor {
        inline app::IVRCompositor_GetCurrentFadeColor__Class** type_info() {
            static app::IVRCompositor_GetCurrentFadeColor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_GetCurrentFadeColor__Class**)(modloader::win::memory::resolve_rva(0x0474C5D8));
            }
            return cache;
        }
        inline app::IVRCompositor_GetCurrentFadeColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetCurrentFadeColor__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetCurrentFadeColor");
        }
        inline app::IVRCompositor_GetCurrentFadeColor* create() {
            return il2cpp::create_object<app::IVRCompositor_GetCurrentFadeColor>(get_class());
        }
    } // namespace IVRCompositor_GetCurrentFadeColor
} // namespace app::classes::types
