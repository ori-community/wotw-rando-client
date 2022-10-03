#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetEyeToHeadTransform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetEyeToHeadTransform__Class** type_info;
        inline app::IVRSystem_GetEyeToHeadTransform__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetEyeToHeadTransform__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetEyeToHeadTransform");
        }
        inline app::IVRSystem_GetEyeToHeadTransform* create() {
            return il2cpp::create_object<app::IVRSystem_GetEyeToHeadTransform>(get_class());
        }
    } // namespace IVRSystem_GetEyeToHeadTransform
} // namespace app::classes::types
