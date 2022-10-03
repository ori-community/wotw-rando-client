#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRDriverManager_GetDriverCount {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRDriverManager_GetDriverCount__Class** type_info;
        inline app::IVRDriverManager_GetDriverCount__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRDriverManager_GetDriverCount__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRDriverManager", "_GetDriverCount");
        }
        inline app::IVRDriverManager_GetDriverCount* create() {
            return il2cpp::create_object<app::IVRDriverManager_GetDriverCount>(get_class());
        }
    } // namespace IVRDriverManager_GetDriverCount
} // namespace app::classes::types
