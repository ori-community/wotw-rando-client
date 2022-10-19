#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_FadeGrid {
        inline app::IVRCompositor_FadeGrid__Class** type_info = (app::IVRCompositor_FadeGrid__Class**)(modloader::win::memory::resolve_rva(0x04741DA8));
        inline app::IVRCompositor_FadeGrid__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_FadeGrid__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_FadeGrid");
        }
        inline app::IVRCompositor_FadeGrid* create() {
            return il2cpp::create_object<app::IVRCompositor_FadeGrid>(get_class());
        }
    } // namespace IVRCompositor_FadeGrid
} // namespace app::classes::types
