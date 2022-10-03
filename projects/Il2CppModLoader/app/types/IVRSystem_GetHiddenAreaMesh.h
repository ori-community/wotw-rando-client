#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetHiddenAreaMesh {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetHiddenAreaMesh__Class** type_info;
        inline app::IVRSystem_GetHiddenAreaMesh__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetHiddenAreaMesh__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetHiddenAreaMesh");
        }
        inline app::IVRSystem_GetHiddenAreaMesh* create() {
            return il2cpp::create_object<app::IVRSystem_GetHiddenAreaMesh>(get_class());
        }
    } // namespace IVRSystem_GetHiddenAreaMesh
} // namespace app::classes::types
