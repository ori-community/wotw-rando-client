#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_GetCurrentFadeColor {
        inline app::IVRCompositor_GetCurrentFadeColor__Class** type_info = (app::IVRCompositor_GetCurrentFadeColor__Class**)(modloader::win::memory::resolve_rva(0x0474C5D8));
        inline app::IVRCompositor_GetCurrentFadeColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetCurrentFadeColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetCurrentFadeColor");
        }
        inline app::IVRCompositor_GetCurrentFadeColor* create() {
            return il2cpp::create_object<app::IVRCompositor_GetCurrentFadeColor>(get_class());
        }
    } // namespace IVRCompositor_GetCurrentFadeColor
} // namespace app::classes::types
