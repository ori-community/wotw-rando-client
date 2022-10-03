#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_ResetSeatedZeroPose {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_ResetSeatedZeroPose__Class** type_info;
        inline app::IVRSystem_ResetSeatedZeroPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_ResetSeatedZeroPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_ResetSeatedZeroPose");
        }
        inline app::IVRSystem_ResetSeatedZeroPose* create() {
            return il2cpp::create_object<app::IVRSystem_ResetSeatedZeroPose>(get_class());
        }
    } // namespace IVRSystem_ResetSeatedZeroPose
} // namespace app::classes::types
