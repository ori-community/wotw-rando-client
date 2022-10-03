#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetOutputDevice {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetOutputDevice__Class** type_info;
        inline app::IVRSystem_GetOutputDevice__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetOutputDevice__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetOutputDevice");
        }
        inline app::IVRSystem_GetOutputDevice* create() {
            return il2cpp::create_object<app::IVRSystem_GetOutputDevice>(get_class());
        }
    } // namespace IVRSystem_GetOutputDevice
} // namespace app::classes::types
