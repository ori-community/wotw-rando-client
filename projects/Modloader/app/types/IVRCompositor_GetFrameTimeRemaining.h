#pragma once
#include <Modloader/app/structs/IVRCompositor_GetFrameTimeRemaining.h>
#include <Modloader/app/structs/IVRCompositor_GetFrameTimeRemaining__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetFrameTimeRemaining {
        inline app::IVRCompositor_GetFrameTimeRemaining__Class** type_info() {
            static app::IVRCompositor_GetFrameTimeRemaining__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_GetFrameTimeRemaining__Class**)(modloader::win::memory::resolve_rva(0x04705158));
            }
            return cache;
        }
        inline app::IVRCompositor_GetFrameTimeRemaining__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetFrameTimeRemaining__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetFrameTimeRemaining");
        }
        inline app::IVRCompositor_GetFrameTimeRemaining* create() {
            return il2cpp::create_object<app::IVRCompositor_GetFrameTimeRemaining>(get_class());
        }
    } // namespace IVRCompositor_GetFrameTimeRemaining
} // namespace app::classes::types
