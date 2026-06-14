#pragma once
#include <Modloader/app/structs/IKSolverFullBodyBiped.h>
#include <Modloader/app/structs/IKSolverFullBodyBiped__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverFullBodyBiped {
        inline app::IKSolverFullBodyBiped__Class** type_info() {
            static app::IKSolverFullBodyBiped__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolverFullBodyBiped__Class**)(modloader::win::memory::resolve_rva(0x0475E1F8));
            }
            return cache;
        }
        inline app::IKSolverFullBodyBiped__Class* get_class() {
            return il2cpp::get_class<app::IKSolverFullBodyBiped__Class>(type_info(), "RootMotion.FinalIK", "IKSolverFullBodyBiped");
        }
        inline app::IKSolverFullBodyBiped* create() {
            return il2cpp::create_object<app::IKSolverFullBodyBiped>(get_class());
        }
    } // namespace IKSolverFullBodyBiped
} // namespace app::classes::types
