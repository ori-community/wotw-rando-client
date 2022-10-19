#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationPropertyBool {
        inline app::IVRApplications_GetApplicationPropertyBool__Class** type_info = (app::IVRApplications_GetApplicationPropertyBool__Class**)(modloader::win::memory::resolve_rva(0x0470E270));
        inline app::IVRApplications_GetApplicationPropertyBool__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationPropertyBool__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationPropertyBool");
        }
        inline app::IVRApplications_GetApplicationPropertyBool* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationPropertyBool>(get_class());
        }
    } // namespace IVRApplications_GetApplicationPropertyBool
} // namespace app::classes::types
