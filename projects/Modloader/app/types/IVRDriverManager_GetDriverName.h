#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRDriverManager_GetDriverName__Class.h>
#include <Modloader/app/structs/IVRDriverManager_GetDriverName.h>

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
