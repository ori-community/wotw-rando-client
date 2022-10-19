#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRDriverManager_GetDriverName {
        inline app::IVRDriverManager_GetDriverName__Class** type_info = (app::IVRDriverManager_GetDriverName__Class**)(modloader::win::memory::resolve_rva(0x04713CC8));
        inline app::IVRDriverManager_GetDriverName__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRDriverManager_GetDriverName__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRDriverManager", "_GetDriverName");
        }
        inline app::IVRDriverManager_GetDriverName* create() {
            return il2cpp::create_object<app::IVRDriverManager_GetDriverName>(get_class());
        }
    } // namespace IVRDriverManager_GetDriverName
} // namespace app::classes::types
