#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_GetCumulativeStats {
        inline app::IVRCompositor_GetCumulativeStats__Class** type_info = (app::IVRCompositor_GetCumulativeStats__Class**)(modloader::win::memory::resolve_rva(0x04710E50));
        inline app::IVRCompositor_GetCumulativeStats__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetCumulativeStats__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetCumulativeStats");
        }
        inline app::IVRCompositor_GetCumulativeStats* create() {
            return il2cpp::create_object<app::IVRCompositor_GetCumulativeStats>(get_class());
        }
    } // namespace IVRCompositor_GetCumulativeStats
} // namespace app::classes::types
