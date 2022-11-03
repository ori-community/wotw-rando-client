#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_GetFrameTimeRemaining {
        inline app::IVRCompositor_GetFrameTimeRemaining__Class** type_info = (app::IVRCompositor_GetFrameTimeRemaining__Class**)(modloader::win::memory::resolve_rva(0x04705158));
        inline app::IVRCompositor_GetFrameTimeRemaining__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetFrameTimeRemaining__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetFrameTimeRemaining");
        }
        inline app::IVRCompositor_GetFrameTimeRemaining* create() {
            return il2cpp::create_object<app::IVRCompositor_GetFrameTimeRemaining>(get_class());
        }
    } // namespace IVRCompositor_GetFrameTimeRemaining
} // namespace app::classes::types
