#pragma once
#include <Modloader/app/structs/IKSolverLookAt.h>
#include <Modloader/app/structs/IKSolverLookAt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverLookAt {
        inline app::IKSolverLookAt__Class** type_info() {
            static app::IKSolverLookAt__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolverLookAt__Class**)(modloader::win::memory::resolve_rva(0x047729B8));
            }
            return cache;
        }
        inline app::IKSolverLookAt__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLookAt__Class>(type_info(), "RootMotion.FinalIK", "IKSolverLookAt");
        }
        inline app::IKSolverLookAt* create() {
            return il2cpp::create_object<app::IKSolverLookAt>(get_class());
        }
    } // namespace IKSolverLookAt
} // namespace app::classes::types
