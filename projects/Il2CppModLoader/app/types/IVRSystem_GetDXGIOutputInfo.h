#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetDXGIOutputInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetDXGIOutputInfo__Class** type_info;
        inline app::IVRSystem_GetDXGIOutputInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetDXGIOutputInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetDXGIOutputInfo");
        }
        inline app::IVRSystem_GetDXGIOutputInfo* create() {
            return il2cpp::create_object<app::IVRSystem_GetDXGIOutputInfo>(get_class());
        }
    } // namespace IVRSystem_GetDXGIOutputInfo
} // namespace app::classes::types
