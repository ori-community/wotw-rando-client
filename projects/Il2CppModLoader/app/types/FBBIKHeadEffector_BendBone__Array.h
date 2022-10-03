#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FBBIKHeadEffector_BendBone__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FBBIKHeadEffector_BendBone__Array__Class** type_info;
        inline app::FBBIKHeadEffector_BendBone__Array__Class* get_class() {
            return il2cpp::get_class<app::FBBIKHeadEffector_BendBone__Array__Class>(type_info, "RootMotion.FinalIK", "FBBIKHeadEffector+BendBone[]");
        }
        inline app::FBBIKHeadEffector_BendBone__Array* create() {
            return il2cpp::create_object<app::FBBIKHeadEffector_BendBone__Array>(get_class());
        }
    } // namespace FBBIKHeadEffector_BendBone__Array
} // namespace app::classes::types
