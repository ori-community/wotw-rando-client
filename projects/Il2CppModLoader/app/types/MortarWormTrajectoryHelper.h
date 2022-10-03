#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarWormTrajectoryHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MortarWormTrajectoryHelper__Class** type_info;
        inline app::MortarWormTrajectoryHelper__Class* get_class() {
            return il2cpp::get_class<app::MortarWormTrajectoryHelper__Class>(type_info, "", "MortarWormTrajectoryHelper");
        }
        inline app::MortarWormTrajectoryHelper* create() {
            return il2cpp::create_object<app::MortarWormTrajectoryHelper>(get_class());
        }
    } // namespace MortarWormTrajectoryHelper
} // namespace app::classes::types
