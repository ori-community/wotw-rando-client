#pragma once
#include <Modloader/app/structs/BipedIKSolvers.h>
#include <Modloader/app/structs/BipedIKSolvers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BipedIKSolvers {
        inline app::BipedIKSolvers__Class** type_info() {
            static app::BipedIKSolvers__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BipedIKSolvers__Class**)(modloader::win::memory::resolve_rva(0x04706CA8));
            }
            return cache;
        }
        inline app::BipedIKSolvers__Class* get_class() {
            return il2cpp::get_class<app::BipedIKSolvers__Class>(type_info(), "RootMotion.FinalIK", "BipedIKSolvers");
        }
        inline app::BipedIKSolvers* create() {
            return il2cpp::create_object<app::BipedIKSolvers>(get_class());
        }
    } // namespace BipedIKSolvers
} // namespace app::classes::types
