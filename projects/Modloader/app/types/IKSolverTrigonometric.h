#pragma once
#include <Modloader/app/structs/IKSolverTrigonometric.h>
#include <Modloader/app/structs/IKSolverTrigonometric__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverTrigonometric {
        inline app::IKSolverTrigonometric__Class** type_info() {
            static app::IKSolverTrigonometric__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolverTrigonometric__Class**)(modloader::win::memory::resolve_rva(0x04791DA0));
            }
            return cache;
        }
        inline app::IKSolverTrigonometric__Class* get_class() {
            return il2cpp::get_class<app::IKSolverTrigonometric__Class>(type_info(), "RootMotion.FinalIK", "IKSolverTrigonometric");
        }
        inline app::IKSolverTrigonometric* create() {
            return il2cpp::create_object<app::IKSolverTrigonometric>(get_class());
        }
    } // namespace IKSolverTrigonometric
} // namespace app::classes::types
