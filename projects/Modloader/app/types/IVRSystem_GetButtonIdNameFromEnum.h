#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetButtonIdNameFromEnum {
        inline app::IVRSystem_GetButtonIdNameFromEnum__Class** type_info = (app::IVRSystem_GetButtonIdNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04756460));
        inline app::IVRSystem_GetButtonIdNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetButtonIdNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetButtonIdNameFromEnum");
        }
        inline app::IVRSystem_GetButtonIdNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSystem_GetButtonIdNameFromEnum>(get_class());
        }
    } // namespace IVRSystem_GetButtonIdNameFromEnum
} // namespace app::classes::types
