#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_ApplyTransform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_ApplyTransform__Class** type_info;
        inline app::IVRSystem_ApplyTransform__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_ApplyTransform__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_ApplyTransform");
        }
        inline app::IVRSystem_ApplyTransform* create() {
            return il2cpp::create_object<app::IVRSystem_ApplyTransform>(get_class());
        }
    } // namespace IVRSystem_ApplyTransform
} // namespace app::classes::types
