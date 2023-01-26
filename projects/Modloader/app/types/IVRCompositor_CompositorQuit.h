#pragma once
#include <Modloader/app/structs/IVRCompositor_CompositorQuit.h>
#include <Modloader/app/structs/IVRCompositor_CompositorQuit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_CompositorQuit {
        inline app::IVRCompositor_CompositorQuit__Class** type_info() {
            static app::IVRCompositor_CompositorQuit__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_CompositorQuit__Class**)(modloader::win::memory::resolve_rva(0x04737FF0));
            }
            return cache;
        }
        inline app::IVRCompositor_CompositorQuit__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_CompositorQuit__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_CompositorQuit");
        }
        inline app::IVRCompositor_CompositorQuit* create() {
            return il2cpp::create_object<app::IVRCompositor_CompositorQuit>(get_class());
        }
    } // namespace IVRCompositor_CompositorQuit
} // namespace app::classes::types
