#pragma once
#include <Modloader/app/structs/FBIKChain_ChildConstraint__Array.h>
#include <Modloader/app/structs/FBIKChain_ChildConstraint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBIKChain_ChildConstraint__Array {
        inline app::FBIKChain_ChildConstraint__Array__Class** type_info() {
            static app::FBIKChain_ChildConstraint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FBIKChain_ChildConstraint__Array__Class**)(modloader::win::memory::resolve_rva(0x04799AE8));
            }
            return cache;
        }
        inline app::FBIKChain_ChildConstraint__Array__Class* get_class() {
            return il2cpp::get_class<app::FBIKChain_ChildConstraint__Array__Class>(type_info(), "RootMotion.FinalIK", "FBIKChain+ChildConstraint[]");
        }
        inline app::FBIKChain_ChildConstraint__Array* create() {
            return il2cpp::create_object<app::FBIKChain_ChildConstraint__Array>(get_class());
        }
    } // namespace FBIKChain_ChildConstraint__Array
} // namespace app::classes::types
