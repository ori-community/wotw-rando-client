#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRDriverManager_GetDriverCount__Class.h>
#include <Modloader/app/structs/IVRDriverManager_GetDriverCount.h>

namespace app::classes::types {
    namespace IVRDriverManager_GetDriverCount {
        inline app::IVRDriverManager_GetDriverCount__Class** type_info = (app::IVRDriverManager_GetDriverCount__Class**)(modloader::win::memory::resolve_rva(0x0473BE98));
        inline app::IVRDriverManager_GetDriverCount__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRDriverManager_GetDriverCount__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRDriverManager", "_GetDriverCount");
        }
        inline app::IVRDriverManager_GetDriverCount* create() {
            return il2cpp::create_object<app::IVRDriverManager_GetDriverCount>(get_class());
        }
    } // namespace IVRDriverManager_GetDriverCount
} // namespace app::classes::types
