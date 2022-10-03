#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetEventTypeNameFromEnum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetEventTypeNameFromEnum__Class** type_info;
        inline app::IVRSystem_GetEventTypeNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetEventTypeNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetEventTypeNameFromEnum");
        }
        inline app::IVRSystem_GetEventTypeNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSystem_GetEventTypeNameFromEnum>(get_class());
        }
    } // namespace IVRSystem_GetEventTypeNameFromEnum
} // namespace app::classes::types
