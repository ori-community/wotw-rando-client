#pragma once
#include <Modloader/app/structs/FBIKChain_ChildConstraint.h>
#include <Modloader/app/structs/FBIKChain_ChildConstraint__Array.h>
#include <Modloader/app/structs/FBIKChain_ChildConstraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBIKChain_ChildConstraint {
        inline app::FBIKChain_ChildConstraint__Class** type_info() {
            static app::FBIKChain_ChildConstraint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FBIKChain_ChildConstraint__Class**)(modloader::win::memory::resolve_rva(0x04732FB8));
            }
            return cache;
        }
        inline app::FBIKChain_ChildConstraint__Class* get_class() {
            return il2cpp::get_nested_class<app::FBIKChain_ChildConstraint__Class>(type_info(), "RootMotion.FinalIK", "FBIKChain", "ChildConstraint");
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
