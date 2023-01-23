#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MortarWormTrajectoryHelper__Class.h>
#include <Modloader/app/structs/MortarWormTrajectoryHelper.h>

namespace app::classes::types {
    namespace MortarWormTrajectoryHelper {
        inline app::MortarWormTrajectoryHelper__Class** type_info = (app::MortarWormTrajectoryHelper__Class**)(modloader::win::memory::resolve_rva(0x04733A50));
        inline app::MortarWormTrajectoryHelper__Class* get_class() {
            return il2cpp::get_class<app::MortarWormTrajectoryHelper__Class>(type_info, "", "MortarWormTrajectoryHelper");
        }
        inline app::MortarWormTrajectoryHelper* create() {
            return il2cpp::create_object<app::MortarWormTrajectoryHelper>(get_class());
        }
    } // namespace MortarWormTrajectoryHelper
} // namespace app::classes::types
