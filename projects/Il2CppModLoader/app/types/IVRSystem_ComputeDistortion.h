#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_ComputeDistortion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_ComputeDistortion__Class** type_info;
        inline app::IVRSystem_ComputeDistortion__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_ComputeDistortion__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_ComputeDistortion");
        }
        inline app::IVRSystem_ComputeDistortion* create() {
            return il2cpp::create_object<app::IVRSystem_ComputeDistortion>(get_class());
        }
    } // namespace IVRSystem_ComputeDistortion
} // namespace app::classes::types
