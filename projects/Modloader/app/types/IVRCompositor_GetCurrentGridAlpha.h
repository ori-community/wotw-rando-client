#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_GetCurrentGridAlpha {
        inline app::IVRCompositor_GetCurrentGridAlpha__Class** type_info = (app::IVRCompositor_GetCurrentGridAlpha__Class**)(modloader::win::memory::resolve_rva(0x04751268));
        inline app::IVRCompositor_GetCurrentGridAlpha__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetCurrentGridAlpha__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetCurrentGridAlpha");
        }
        inline app::IVRCompositor_GetCurrentGridAlpha* create() {
            return il2cpp::create_object<app::IVRCompositor_GetCurrentGridAlpha>(get_class());
        }
    } // namespace IVRCompositor_GetCurrentGridAlpha
} // namespace app::classes::types
