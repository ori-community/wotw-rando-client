#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BipedIKSolvers {
        inline app::BipedIKSolvers__Class** type_info = (app::BipedIKSolvers__Class**)(modloader::win::memory::resolve_rva(0x04706CA8));
        inline app::BipedIKSolvers__Class* get_class() {
            return il2cpp::get_class<app::BipedIKSolvers__Class>(type_info, "RootMotion.FinalIK", "BipedIKSolvers");
        }
        inline app::BipedIKSolvers* create() {
            return il2cpp::create_object<app::BipedIKSolvers>(get_class());
        }
    } // namespace BipedIKSolvers
} // namespace app::classes::types
