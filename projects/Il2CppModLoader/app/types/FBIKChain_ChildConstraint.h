#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FBIKChain_ChildConstraint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FBIKChain_ChildConstraint__Class** type_info;
        inline app::FBIKChain_ChildConstraint__Class* get_class() {
            return il2cpp::get_nested_class<app::FBIKChain_ChildConstraint__Class>(type_info, "RootMotion.FinalIK", "FBIKChain", "ChildConstraint");
        }
        inline app::FBIKChain_ChildConstraint* create() {
            return il2cpp::create_object<app::FBIKChain_ChildConstraint>(get_class());
        }
        inline app::FBIKChain_ChildConstraint__Array* create_array(int size) {
            return il2cpp::array_new<app::FBIKChain_ChildConstraint__Array>(get_class(), size);
        }
        inline app::FBIKChain_ChildConstraint__Array* create_array(const std::vector<app::FBIKChain_ChildConstraint*>& items) {
            return il2cpp::array_new<app::FBIKChain_ChildConstraint__Array>(get_class(), items);
        }
    } // namespace FBIKChain_ChildConstraint
} // namespace app::classes::types
