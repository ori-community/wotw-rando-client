#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRSystem_SetDisplayVisibility__Class.h>
#include <Modloader/app/structs/IVRSystem_SetDisplayVisibility.h>

namespace app::classes::types {
    namespace IVRSystem_SetDisplayVisibility {
        inline app::IVRSystem_SetDisplayVisibility__Class** type_info = (app::IVRSystem_SetDisplayVisibility__Class**)(modloader::win::memory::resolve_rva(0x047249D8));
        inline app::IVRSystem_SetDisplayVisibility__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_SetDisplayVisibility__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_SetDisplayVisibility");
        }
        inline app::IVRSystem_SetDisplayVisibility* create() {
            return il2cpp::create_object<app::IVRSystem_SetDisplayVisibility>(get_class());
        }
    } // namespace IVRSystem_SetDisplayVisibility
} // namespace app::classes::types
