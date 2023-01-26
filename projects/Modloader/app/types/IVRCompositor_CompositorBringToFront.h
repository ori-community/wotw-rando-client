#pragma once
#include <Modloader/app/structs/IVRCompositor_CompositorBringToFront.h>
#include <Modloader/app/structs/IVRCompositor_CompositorBringToFront__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_CompositorBringToFront {
        inline app::IVRCompositor_CompositorBringToFront__Class** type_info() {
            static app::IVRCompositor_CompositorBringToFront__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_CompositorBringToFront__Class**)(modloader::win::memory::resolve_rva(0x04792AB0));
            }
            return cache;
        }
        inline app::IVRCompositor_CompositorBringToFront__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_CompositorBringToFront__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_CompositorBringToFront");
        }
        inline app::IVRCompositor_CompositorBringToFront* create() {
            return il2cpp::create_object<app::IVRCompositor_CompositorBringToFront>(get_class());
        }
    } // namespace IVRCompositor_CompositorBringToFront
} // namespace app::classes::types
