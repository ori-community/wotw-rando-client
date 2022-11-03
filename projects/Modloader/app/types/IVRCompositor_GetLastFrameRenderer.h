#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_GetLastFrameRenderer {
        inline app::IVRCompositor_GetLastFrameRenderer__Class** type_info = (app::IVRCompositor_GetLastFrameRenderer__Class**)(modloader::win::memory::resolve_rva(0x0471C168));
        inline app::IVRCompositor_GetLastFrameRenderer__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetLastFrameRenderer__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetLastFrameRenderer");
        }
        inline app::IVRCompositor_GetLastFrameRenderer* create() {
            return il2cpp::create_object<app::IVRCompositor_GetLastFrameRenderer>(get_class());
        }
    } // namespace IVRCompositor_GetLastFrameRenderer
} // namespace app::classes::types
