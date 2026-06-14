#pragma once
#include <Modloader/app/structs/IKSolver_Bone__Array.h>
#include <Modloader/app/structs/IKSolver_Bone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolver_Bone__Array {
        inline app::IKSolver_Bone__Array__Class** type_info() {
            static app::IKSolver_Bone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolver_Bone__Array__Class**)(modloader::win::memory::resolve_rva(0x04774B60));
            }
            return cache;
        }
        inline app::IKSolver_Bone__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolver_Bone__Array__Class>(type_info(), "RootMotion.FinalIK", "IKSolver+Bone[]");
        }
        inline app::IKSolver_Bone__Array* create() {
            return il2cpp::create_object<app::IKSolver_Bone__Array>(get_class());
        }
    } // namespace IKSolver_Bone__Array
} // namespace app::classes::types
