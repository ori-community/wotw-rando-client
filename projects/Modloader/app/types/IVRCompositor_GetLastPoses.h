#pragma once
#include <Modloader/app/structs/IVRCompositor_GetLastPoses.h>
#include <Modloader/app/structs/IVRCompositor_GetLastPoses__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetLastPoses {
        inline app::IVRCompositor_GetLastPoses__Class** type_info() {
            static app::IVRCompositor_GetLastPoses__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_GetLastPoses__Class**)(modloader::win::memory::resolve_rva(0x0476CC60));
            }
            return cache;
        }
        inline app::IVRCompositor_GetLastPoses__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetLastPoses__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetLastPoses");
        }
        inline app::IVRCompositor_GetLastPoses* create() {
            return il2cpp::create_object<app::IVRCompositor_GetLastPoses>(get_class());
        }
    } // namespace IVRCompositor_GetLastPoses
} // namespace app::classes::types
