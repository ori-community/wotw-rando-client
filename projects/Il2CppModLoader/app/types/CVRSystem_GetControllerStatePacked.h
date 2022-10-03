#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRSystem_GetControllerStatePacked {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRSystem_GetControllerStatePacked__Class** type_info;
        inline app::CVRSystem_GetControllerStatePacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRSystem_GetControllerStatePacked__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRSystem", "_GetControllerStatePacked");
        }
        inline app::CVRSystem_GetControllerStatePacked* create() {
            return il2cpp::create_object<app::CVRSystem_GetControllerStatePacked>(get_class());
        }
    } // namespace CVRSystem_GetControllerStatePacked
} // namespace app::classes::types
