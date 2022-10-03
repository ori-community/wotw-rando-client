#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_ForceReconnectProcess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_ForceReconnectProcess__Class** type_info;
        inline app::IVRCompositor_ForceReconnectProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ForceReconnectProcess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ForceReconnectProcess");
        }
        inline app::IVRCompositor_ForceReconnectProcess* create() {
            return il2cpp::create_object<app::IVRCompositor_ForceReconnectProcess>(get_class());
        }
    } // namespace IVRCompositor_ForceReconnectProcess
} // namespace app::classes::types
