#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRCompositor_ForceReconnectProcess__Class.h>
#include <Modloader/app/structs/IVRCompositor_ForceReconnectProcess.h>

namespace app::classes::types {
    namespace IVRCompositor_ForceReconnectProcess {
        inline app::IVRCompositor_ForceReconnectProcess__Class** type_info = (app::IVRCompositor_ForceReconnectProcess__Class**)(modloader::win::memory::resolve_rva(0x047091B0));
        inline app::IVRCompositor_ForceReconnectProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ForceReconnectProcess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ForceReconnectProcess");
        }
        inline app::IVRCompositor_ForceReconnectProcess* create() {
            return il2cpp::create_object<app::IVRCompositor_ForceReconnectProcess>(get_class());
        }
    } // namespace IVRCompositor_ForceReconnectProcess
} // namespace app::classes::types
