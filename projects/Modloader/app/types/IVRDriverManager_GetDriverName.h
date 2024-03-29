#pragma once
#include <Modloader/app/structs/IVRDriverManager_GetDriverName.h>
#include <Modloader/app/structs/IVRDriverManager_GetDriverName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRDriverManager_GetDriverName {
        inline app::IVRDriverManager_GetDriverName__Class** type_info() {
            static app::IVRDriverManager_GetDriverName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRDriverManager_GetDriverName__Class**)(modloader::win::memory::resolve_rva(0x04713CC8));
            }
            return cache;
        }
        inline app::IVRDriverManager_GetDriverName__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRDriverManager_GetDriverName__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRDriverManager", "_GetDriverName");
        }
        inline app::IVRDriverManager_GetDriverName* create() {
            return il2cpp::create_object<app::IVRDriverManager_GetDriverName>(get_class());
        }
    } // namespace IVRDriverManager_GetDriverName
} // namespace app::classes::types
