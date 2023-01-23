#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRSystem_GetPropErrorNameFromEnum__Class.h>
#include <Modloader/app/structs/IVRSystem_GetPropErrorNameFromEnum.h>

namespace app::classes::types {
    namespace IVRSystem_GetPropErrorNameFromEnum {
        inline app::IVRSystem_GetPropErrorNameFromEnum__Class** type_info = (app::IVRSystem_GetPropErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x047578C8));
        inline app::IVRSystem_GetPropErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetPropErrorNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetPropErrorNameFromEnum");
        }
        inline app::IVRSystem_GetPropErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSystem_GetPropErrorNameFromEnum>(get_class());
        }
    } // namespace IVRSystem_GetPropErrorNameFromEnum
} // namespace app::classes::types
