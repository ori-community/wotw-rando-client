#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRSystem_GetControllerStatePacked {
        inline app::CVRSystem_GetControllerStatePacked__Class** type_info = (app::CVRSystem_GetControllerStatePacked__Class**)(modloader::win::memory::resolve_rva(0x0478B868));
        inline app::CVRSystem_GetControllerStatePacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRSystem_GetControllerStatePacked__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRSystem", "_GetControllerStatePacked");
        }
        inline app::CVRSystem_GetControllerStatePacked* create() {
            return il2cpp::create_object<app::CVRSystem_GetControllerStatePacked>(get_class());
        }
    } // namespace CVRSystem_GetControllerStatePacked
} // namespace app::classes::types
