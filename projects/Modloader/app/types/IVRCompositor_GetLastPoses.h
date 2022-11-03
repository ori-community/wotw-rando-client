#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_GetLastPoses {
        inline app::IVRCompositor_GetLastPoses__Class** type_info = (app::IVRCompositor_GetLastPoses__Class**)(modloader::win::memory::resolve_rva(0x0476CC60));
        inline app::IVRCompositor_GetLastPoses__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetLastPoses__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetLastPoses");
        }
        inline app::IVRCompositor_GetLastPoses* create() {
            return il2cpp::create_object<app::IVRCompositor_GetLastPoses>(get_class());
        }
    } // namespace IVRCompositor_GetLastPoses
} // namespace app::classes::types
