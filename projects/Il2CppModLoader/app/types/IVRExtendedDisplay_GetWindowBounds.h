#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRExtendedDisplay_GetWindowBounds {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRExtendedDisplay_GetWindowBounds__Class** type_info;
        inline app::IVRExtendedDisplay_GetWindowBounds__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRExtendedDisplay_GetWindowBounds__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRExtendedDisplay", "_GetWindowBounds");
        }
        inline app::IVRExtendedDisplay_GetWindowBounds* create() {
            return il2cpp::create_object<app::IVRExtendedDisplay_GetWindowBounds>(get_class());
        }
    } // namespace IVRExtendedDisplay_GetWindowBounds
} // namespace app::classes::types
