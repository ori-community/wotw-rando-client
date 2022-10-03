#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRDriverManager_GetDriverName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRDriverManager_GetDriverName__Class** type_info;
        inline app::IVRDriverManager_GetDriverName__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRDriverManager_GetDriverName__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRDriverManager", "_GetDriverName");
        }
        inline app::IVRDriverManager_GetDriverName* create() {
            return il2cpp::create_object<app::IVRDriverManager_GetDriverName>(get_class());
        }
    } // namespace IVRDriverManager_GetDriverName
} // namespace app::classes::types
