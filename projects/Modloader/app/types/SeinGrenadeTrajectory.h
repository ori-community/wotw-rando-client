#pragma once
#include <Modloader/app/structs/SeinGrenadeTrajectory.h>
#include <Modloader/app/structs/SeinGrenadeTrajectory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrenadeTrajectory {
        inline app::SeinGrenadeTrajectory__Class** type_info() {
            static app::SeinGrenadeTrajectory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrenadeTrajectory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrenadeTrajectory__Class* get_class() {
            return il2cpp::get_class<app::SeinGrenadeTrajectory__Class>(type_info(), "", "SeinGrenadeTrajectory");
        }
        inline app::SeinGrenadeTrajectory* create() {
            return il2cpp::create_object<app::SeinGrenadeTrajectory>(get_class());
        }
    } // namespace SeinGrenadeTrajectory
} // namespace app::classes::types
