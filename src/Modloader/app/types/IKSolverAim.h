#pragma once
#include <Modloader/app/structs/IKSolverAim.h>
#include <Modloader/app/structs/IKSolverAim__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverAim {
        inline app::IKSolverAim__Class** type_info() {
            static app::IKSolverAim__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolverAim__Class**)(modloader::win::memory::resolve_rva(0x04754700));
            }
            return cache;
        }
        inline app::IKSolverAim__Class* get_class() {
            return il2cpp::get_class<app::IKSolverAim__Class>(type_info(), "RootMotion.FinalIK", "IKSolverAim");
        }
        inline app::IKSolverAim* create() {
            return il2cpp::create_object<app::IKSolverAim>(get_class());
        }
    } // namespace IKSolverAim
} // namespace app::classes::types
