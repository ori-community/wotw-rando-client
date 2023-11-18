#pragma once
#include <Modloader/app/structs/IVRCompositor_SetExplicitTimingMode.h>
#include <Modloader/app/structs/IVRCompositor_SetExplicitTimingMode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_SetExplicitTimingMode {
        inline app::IVRCompositor_SetExplicitTimingMode__Class** type_info() {
            static app::IVRCompositor_SetExplicitTimingMode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_SetExplicitTimingMode__Class**)(modloader::win::memory::resolve_rva(0x04797558));
            }
            return cache;
        }
        inline app::IVRCompositor_SetExplicitTimingMode__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_SetExplicitTimingMode__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_SetExplicitTimingMode");
        }
        inline app::IVRCompositor_SetExplicitTimingMode* create() {
            return il2cpp::create_object<app::IVRCompositor_SetExplicitTimingMode>(get_class());
        }
    } // namespace IVRCompositor_SetExplicitTimingMode
} // namespace app::classes::types
