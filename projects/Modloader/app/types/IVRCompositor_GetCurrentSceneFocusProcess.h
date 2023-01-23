#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRCompositor_GetCurrentSceneFocusProcess__Class.h>
#include <Modloader/app/structs/IVRCompositor_GetCurrentSceneFocusProcess.h>

namespace app::classes::types {
    namespace IVRCompositor_GetCurrentSceneFocusProcess {
        inline app::IVRCompositor_GetCurrentSceneFocusProcess__Class** type_info = (app::IVRCompositor_GetCurrentSceneFocusProcess__Class**)(modloader::win::memory::resolve_rva(0x0472AD88));
        inline app::IVRCompositor_GetCurrentSceneFocusProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetCurrentSceneFocusProcess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetCurrentSceneFocusProcess");
        }
        inline app::IVRCompositor_GetCurrentSceneFocusProcess* create() {
            return il2cpp::create_object<app::IVRCompositor_GetCurrentSceneFocusProcess>(get_class());
        }
    } // namespace IVRCompositor_GetCurrentSceneFocusProcess
} // namespace app::classes::types
