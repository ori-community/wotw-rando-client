#pragma once
#include <Modloader/app/structs/IVRCompositor_ForceReconnectProcess.h>
#include <Modloader/app/structs/IVRCompositor_ForceReconnectProcess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_ForceReconnectProcess {
        inline app::IVRCompositor_ForceReconnectProcess__Class** type_info() {
            static app::IVRCompositor_ForceReconnectProcess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_ForceReconnectProcess__Class**)(modloader::win::memory::resolve_rva(0x047091B0));
            }
            return cache;
        }
        inline app::IVRCompositor_ForceReconnectProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ForceReconnectProcess__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ForceReconnectProcess");
        }
        inline app::IVRCompositor_ForceReconnectProcess* create() {
            return il2cpp::create_object<app::IVRCompositor_ForceReconnectProcess>(get_class());
        }
    } // namespace IVRCompositor_ForceReconnectProcess
} // namespace app::classes::types
