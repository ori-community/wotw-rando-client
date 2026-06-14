#pragma once
#include <Modloader/app/structs/IVRCompositor_SuspendRendering.h>
#include <Modloader/app/structs/IVRCompositor_SuspendRendering__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_SuspendRendering {
        inline app::IVRCompositor_SuspendRendering__Class** type_info() {
            static app::IVRCompositor_SuspendRendering__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_SuspendRendering__Class**)(modloader::win::memory::resolve_rva(0x047008E8));
            }
            return cache;
        }
        inline app::IVRCompositor_SuspendRendering__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_SuspendRendering__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_SuspendRendering");
        }
        inline app::IVRCompositor_SuspendRendering* create() {
            return il2cpp::create_object<app::IVRCompositor_SuspendRendering>(get_class());
        }
    } // namespace IVRCompositor_SuspendRendering
} // namespace app::classes::types
