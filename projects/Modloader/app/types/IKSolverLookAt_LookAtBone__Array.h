#pragma once
#include <Modloader/app/structs/IKSolverLookAt_LookAtBone__Array.h>
#include <Modloader/app/structs/IKSolverLookAt_LookAtBone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverLookAt_LookAtBone__Array {
        inline app::IKSolverLookAt_LookAtBone__Array__Class** type_info() {
            static app::IKSolverLookAt_LookAtBone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolverLookAt_LookAtBone__Array__Class**)(modloader::win::memory::resolve_rva(0x0473ADD0));
            }
            return cache;
        }
        inline app::IKSolverLookAt_LookAtBone__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLookAt_LookAtBone__Array__Class>(type_info(), "RootMotion.FinalIK", "IKSolverLookAt+LookAtBone[]");
        }
        inline app::IKSolverLookAt_LookAtBone__Array* create() {
            return il2cpp::create_object<app::IKSolverLookAt_LookAtBone__Array>(get_class());
        }
    } // namespace IKSolverLookAt_LookAtBone__Array
} // namespace app::classes::types
