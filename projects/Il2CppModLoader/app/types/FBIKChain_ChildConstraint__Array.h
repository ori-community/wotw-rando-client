#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FBIKChain_ChildConstraint__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FBIKChain_ChildConstraint__Array__Class** type_info;
        inline app::FBIKChain_ChildConstraint__Array__Class* get_class() {
            return il2cpp::get_class<app::FBIKChain_ChildConstraint__Array__Class>(type_info, "RootMotion.FinalIK", "FBIKChain+ChildConstraint[]");
        }
        inline app::FBIKChain_ChildConstraint__Array* create() {
            return il2cpp::create_object<app::FBIKChain_ChildConstraint__Array>(get_class());
        }
    } // namespace FBIKChain_ChildConstraint__Array
} // namespace app::classes::types
