#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRSystem_GetControllerStateWithPosePacked {
        inline app::CVRSystem_GetControllerStateWithPosePacked__Class** type_info = (app::CVRSystem_GetControllerStateWithPosePacked__Class**)(modloader::win::memory::resolve_rva(0x047932F8));
        inline app::CVRSystem_GetControllerStateWithPosePacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRSystem_GetControllerStateWithPosePacked__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRSystem", "_GetControllerStateWithPosePacked");
        }
        inline app::CVRSystem_GetControllerStateWithPosePacked* create() {
            return il2cpp::create_object<app::CVRSystem_GetControllerStateWithPosePacked>(get_class());
        }
    } // namespace CVRSystem_GetControllerStateWithPosePacked
} // namespace app::classes::types
