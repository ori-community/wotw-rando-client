#pragma once
#include <Modloader/app/structs/IkChainSolver_JointData__Array.h>
#include <Modloader/app/structs/IkChainSolver_JointData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IkChainSolver_JointData__Array {
        inline app::IkChainSolver_JointData__Array__Class** type_info() {
            static app::IkChainSolver_JointData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IkChainSolver_JointData__Array__Class**)(modloader::win::memory::resolve_rva(0x04734810));
            }
            return cache;
        }
        inline app::IkChainSolver_JointData__Array__Class* get_class() {
            return il2cpp::get_class<app::IkChainSolver_JointData__Array__Class>(type_info(), "Moon", "IkChainSolver+JointData[]");
        }
        inline app::IkChainSolver_JointData__Array* create() {
            return il2cpp::create_object<app::IkChainSolver_JointData__Array>(get_class());
        }
    } // namespace IkChainSolver_JointData__Array
} // namespace app::classes::types
