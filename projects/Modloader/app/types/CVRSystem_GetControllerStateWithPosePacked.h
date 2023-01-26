#pragma once
#include <Modloader/app/structs/CVRSystem_GetControllerStateWithPosePacked.h>
#include <Modloader/app/structs/CVRSystem_GetControllerStateWithPosePacked__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRSystem_GetControllerStateWithPosePacked {
        inline app::CVRSystem_GetControllerStateWithPosePacked__Class** type_info() {
            static app::CVRSystem_GetControllerStateWithPosePacked__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVRSystem_GetControllerStateWithPosePacked__Class**)(modloader::win::memory::resolve_rva(0x047932F8));
            }
            return cache;
        }
        inline app::CVRSystem_GetControllerStateWithPosePacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRSystem_GetControllerStateWithPosePacked__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRSystem", "_GetControllerStateWithPosePacked");
        }
        inline app::CVRSystem_GetControllerStateWithPosePacked* create() {
            return il2cpp::create_object<app::CVRSystem_GetControllerStateWithPosePacked>(get_class());
        }
    } // namespace CVRSystem_GetControllerStateWithPosePacked
} // namespace app::classes::types
