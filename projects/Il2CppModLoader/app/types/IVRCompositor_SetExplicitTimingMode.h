#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_SetExplicitTimingMode {
        inline app::IVRCompositor_SetExplicitTimingMode__Class** type_info = (app::IVRCompositor_SetExplicitTimingMode__Class**)(modloader::win::memory::resolve_rva(0x04797558));
        inline app::IVRCompositor_SetExplicitTimingMode__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_SetExplicitTimingMode__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_SetExplicitTimingMode");
        }
        inline app::IVRCompositor_SetExplicitTimingMode* create() {
            return il2cpp::create_object<app::IVRCompositor_SetExplicitTimingMode>(get_class());
        }
    } // namespace IVRCompositor_SetExplicitTimingMode
} // namespace app::classes::types
