#pragma once
#include <Modloader/app/structs/IVRSystem_GetPropErrorNameFromEnum.h>
#include <Modloader/app/structs/IVRSystem_GetPropErrorNameFromEnum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetPropErrorNameFromEnum {
        inline app::IVRSystem_GetPropErrorNameFromEnum__Class** type_info() {
            static app::IVRSystem_GetPropErrorNameFromEnum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetPropErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x047578C8));
            }
            return cache;
        }
        inline app::IVRSystem_GetPropErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetPropErrorNameFromEnum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetPropErrorNameFromEnum");
        }
        inline app::IVRSystem_GetPropErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSystem_GetPropErrorNameFromEnum>(get_class());
        }
    } // namespace IVRSystem_GetPropErrorNameFromEnum
} // namespace app::classes::types
