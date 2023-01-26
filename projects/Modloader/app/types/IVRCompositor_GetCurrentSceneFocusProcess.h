#pragma once
#include <Modloader/app/structs/IVRCompositor_GetCurrentSceneFocusProcess.h>
#include <Modloader/app/structs/IVRCompositor_GetCurrentSceneFocusProcess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetCurrentSceneFocusProcess {
        inline app::IVRCompositor_GetCurrentSceneFocusProcess__Class** type_info() {
            static app::IVRCompositor_GetCurrentSceneFocusProcess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_GetCurrentSceneFocusProcess__Class**)(modloader::win::memory::resolve_rva(0x0472AD88));
            }
            return cache;
        }
        inline app::IVRCompositor_GetCurrentSceneFocusProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetCurrentSceneFocusProcess__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetCurrentSceneFocusProcess");
        }
        inline app::IVRCompositor_GetCurrentSceneFocusProcess* create() {
            return il2cpp::create_object<app::IVRCompositor_GetCurrentSceneFocusProcess>(get_class());
        }
    } // namespace IVRCompositor_GetCurrentSceneFocusProcess
} // namespace app::classes::types
