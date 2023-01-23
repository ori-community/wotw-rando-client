#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IKSolverLookAt_LookAtBone__Array__Class.h>
#include <Modloader/app/structs/IKSolverLookAt_LookAtBone__Array.h>

namespace app::classes::types {
    namespace IKSolverLookAt_LookAtBone__Array {
        inline app::IKSolverLookAt_LookAtBone__Array__Class** type_info = (app::IKSolverLookAt_LookAtBone__Array__Class**)(modloader::win::memory::resolve_rva(0x0473ADD0));
        inline app::IKSolverLookAt_LookAtBone__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLookAt_LookAtBone__Array__Class>(type_info, "RootMotion.FinalIK", "IKSolverLookAt+LookAtBone[]");
        }
        inline app::IKSolverLookAt_LookAtBone__Array* create() {
            return il2cpp::create_object<app::IKSolverLookAt_LookAtBone__Array>(get_class());
        }
    } // namespace IKSolverLookAt_LookAtBone__Array
} // namespace app::classes::types
