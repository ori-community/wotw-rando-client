#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetControllerAxisTypeNameFromEnum {
        inline app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class** type_info = (app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04771208));
        inline app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetControllerAxisTypeNameFromEnum");
        }
        inline app::IVRSystem_GetControllerAxisTypeNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSystem_GetControllerAxisTypeNameFromEnum>(get_class());
        }
    } // namespace IVRSystem_GetControllerAxisTypeNameFromEnum
} // namespace app::classes::types
