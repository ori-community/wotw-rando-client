#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRSystem_GetEventTypeNameFromEnum__Class.h>
#include <Modloader/app/structs/IVRSystem_GetEventTypeNameFromEnum.h>

namespace app::classes::types {
    namespace IVRSystem_GetEventTypeNameFromEnum {
        inline app::IVRSystem_GetEventTypeNameFromEnum__Class** type_info = (app::IVRSystem_GetEventTypeNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04780860));
        inline app::IVRSystem_GetEventTypeNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetEventTypeNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetEventTypeNameFromEnum");
        }
        inline app::IVRSystem_GetEventTypeNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSystem_GetEventTypeNameFromEnum>(get_class());
        }
    } // namespace IVRSystem_GetEventTypeNameFromEnum
} // namespace app::classes::types
