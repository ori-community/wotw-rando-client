#pragma once
#include <Modloader/app/structs/IKSolverCCD.h>
#include <Modloader/app/structs/IKSolverCCD__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverCCD {
        inline app::IKSolverCCD__Class** type_info() {
            static app::IKSolverCCD__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolverCCD__Class**)(modloader::win::memory::resolve_rva(0x0471DE40));
            }
            return cache;
        }
        inline app::IKSolverCCD__Class* get_class() {
            return il2cpp::get_class<app::IKSolverCCD__Class>(type_info(), "RootMotion.FinalIK", "IKSolverCCD");
        }
        inline app::IKSolverCCD* create() {
            return il2cpp::create_object<app::IKSolverCCD>(get_class());
        }
    } // namespace IKSolverCCD
} // namespace app::classes::types
