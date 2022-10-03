#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRExtendedDisplay_GetDXGIOutputInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRExtendedDisplay_GetDXGIOutputInfo__Class** type_info;
        inline app::IVRExtendedDisplay_GetDXGIOutputInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRExtendedDisplay_GetDXGIOutputInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRExtendedDisplay", "_GetDXGIOutputInfo");
        }
        inline app::IVRExtendedDisplay_GetDXGIOutputInfo* create() {
            return il2cpp::create_object<app::IVRExtendedDisplay_GetDXGIOutputInfo>(get_class());
        }
    } // namespace IVRExtendedDisplay_GetDXGIOutputInfo
} // namespace app::classes::types
