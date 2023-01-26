#pragma once
#include <Modloader/app/structs/IVRCompositor_GetLastFrameRenderer.h>
#include <Modloader/app/structs/IVRCompositor_GetLastFrameRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetLastFrameRenderer {
        inline app::IVRCompositor_GetLastFrameRenderer__Class** type_info() {
            static app::IVRCompositor_GetLastFrameRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_GetLastFrameRenderer__Class**)(modloader::win::memory::resolve_rva(0x0471C168));
            }
            return cache;
        }
        inline app::IVRCompositor_GetLastFrameRenderer__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetLastFrameRenderer__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetLastFrameRenderer");
        }
        inline app::IVRCompositor_GetLastFrameRenderer* create() {
            return il2cpp::create_object<app::IVRCompositor_GetLastFrameRenderer>(get_class());
        }
    } // namespace IVRCompositor_GetLastFrameRenderer
} // namespace app::classes::types
