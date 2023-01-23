#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IKSolver_Node__Array__Class.h>
#include <Modloader/app/structs/IKSolver_Node__Array.h>

namespace app::classes::types {
    namespace IKSolver_Node__Array {
        inline app::IKSolver_Node__Array__Class** type_info = (app::IKSolver_Node__Array__Class**)(modloader::win::memory::resolve_rva(0x0478B108));
        inline app::IKSolver_Node__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolver_Node__Array__Class>(type_info, "RootMotion.FinalIK", "IKSolver+Node[]");
        }
        inline app::IKSolver_Node__Array* create() {
            return il2cpp::create_object<app::IKSolver_Node__Array>(get_class());
        }
    } // namespace IKSolver_Node__Array
} // namespace app::classes::types
