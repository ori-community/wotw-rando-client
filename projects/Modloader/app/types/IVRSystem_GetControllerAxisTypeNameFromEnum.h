#pragma once
#include <Modloader/app/structs/IVRSystem_GetControllerAxisTypeNameFromEnum.h>
#include <Modloader/app/structs/IVRSystem_GetControllerAxisTypeNameFromEnum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetControllerAxisTypeNameFromEnum {
        inline app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class** type_info() {
            static app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04771208));
            }
            return cache;
        }
        inline app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetControllerAxisTypeNameFromEnum");
        }
        inline app::IVRSystem_GetControllerAxisTypeNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSystem_GetControllerAxisTypeNameFromEnum>(get_class());
        }
    } // namespace IVRSystem_GetControllerAxisTypeNameFromEnum
} // namespace app::classes::types
