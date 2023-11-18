#pragma once
#include <Modloader/app/structs/IKSolverLimb__Array.h>
#include <Modloader/app/structs/IKSolverLimb__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverLimb__Array {
        inline app::IKSolverLimb__Array__Class** type_info() {
            static app::IKSolverLimb__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolverLimb__Array__Class**)(modloader::win::memory::resolve_rva(0x04753880));
            }
            return cache;
        }
        inline app::IKSolverLimb__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLimb__Array__Class>(type_info(), "RootMotion.FinalIK", "IKSolverLimb[]");
        }
        inline app::IKSolverLimb__Array* create() {
            return il2cpp::create_object<app::IKSolverLimb__Array>(get_class());
        }
    } // namespace IKSolverLimb__Array
} // namespace app::classes::types
