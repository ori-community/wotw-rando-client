#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_GetFrameTiming {
        inline app::IVRCompositor_GetFrameTiming__Class** type_info = (app::IVRCompositor_GetFrameTiming__Class**)(modloader::win::memory::resolve_rva(0x04775938));
        inline app::IVRCompositor_GetFrameTiming__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetFrameTiming__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetFrameTiming");
        }
        inline app::IVRCompositor_GetFrameTiming* create() {
            return il2cpp::create_object<app::IVRCompositor_GetFrameTiming>(get_class());
        }
    } // namespace IVRCompositor_GetFrameTiming
} // namespace app::classes::types
