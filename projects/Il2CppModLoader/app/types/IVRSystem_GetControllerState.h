#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetControllerState {
        inline app::IVRSystem_GetControllerState__Class** type_info = (app::IVRSystem_GetControllerState__Class**)(modloader::win::memory::resolve_rva(0x04787820));
        inline app::IVRSystem_GetControllerState__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetControllerState__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetControllerState");
        }
        inline app::IVRSystem_GetControllerState* create() {
            return il2cpp::create_object<app::IVRSystem_GetControllerState>(get_class());
        }
    } // namespace IVRSystem_GetControllerState
} // namespace app::classes::types
