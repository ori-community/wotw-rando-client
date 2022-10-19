#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetDXGIOutputInfo {
        inline app::IVRSystem_GetDXGIOutputInfo__Class** type_info = (app::IVRSystem_GetDXGIOutputInfo__Class**)(modloader::win::memory::resolve_rva(0x0474EBF0));
        inline app::IVRSystem_GetDXGIOutputInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetDXGIOutputInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetDXGIOutputInfo");
        }
        inline app::IVRSystem_GetDXGIOutputInfo* create() {
            return il2cpp::create_object<app::IVRSystem_GetDXGIOutputInfo>(get_class());
        }
    } // namespace IVRSystem_GetDXGIOutputInfo
} // namespace app::classes::types
