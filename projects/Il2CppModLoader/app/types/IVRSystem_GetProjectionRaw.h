#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetProjectionRaw {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetProjectionRaw__Class** type_info;
        inline app::IVRSystem_GetProjectionRaw__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetProjectionRaw__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetProjectionRaw");
        }
        inline app::IVRSystem_GetProjectionRaw* create() {
            return il2cpp::create_object<app::IVRSystem_GetProjectionRaw>(get_class());
        }
    } // namespace IVRSystem_GetProjectionRaw
} // namespace app::classes::types
