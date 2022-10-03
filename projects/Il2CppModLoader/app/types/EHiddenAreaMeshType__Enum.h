#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EHiddenAreaMeshType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EHiddenAreaMeshType__Enum__Class** type_info;
        inline app::EHiddenAreaMeshType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EHiddenAreaMeshType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EHiddenAreaMeshType");
        }
        inline app::EHiddenAreaMeshType__Enum* create() {
            return il2cpp::create_object<app::EHiddenAreaMeshType__Enum>(get_class());
        }
    } // namespace EHiddenAreaMeshType__Enum
} // namespace app::classes::types
