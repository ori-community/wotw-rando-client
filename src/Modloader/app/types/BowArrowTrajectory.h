#pragma once
#include <Modloader/app/structs/BowArrowTrajectory.h>
#include <Modloader/app/structs/BowArrowTrajectory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BowArrowTrajectory {
        inline app::BowArrowTrajectory__Class** type_info() {
            static app::BowArrowTrajectory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BowArrowTrajectory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BowArrowTrajectory__Class* get_class() {
            return il2cpp::get_class<app::BowArrowTrajectory__Class>(type_info(), "", "BowArrowTrajectory");
        }
        inline app::BowArrowTrajectory* create() {
            return il2cpp::create_object<app::BowArrowTrajectory>(get_class());
        }
    } // namespace BowArrowTrajectory
} // namespace app::classes::types
