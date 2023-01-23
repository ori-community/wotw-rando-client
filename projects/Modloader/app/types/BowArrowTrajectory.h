#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BowArrowTrajectory__Class.h>
#include <Modloader/app/structs/BowArrowTrajectory.h>

namespace app::classes::types {
    namespace BowArrowTrajectory {
        namespace {
            inline app::BowArrowTrajectory__Class* type_info_ref = nullptr;
        }
        inline app::BowArrowTrajectory__Class** type_info = &type_info_ref;
        inline app::BowArrowTrajectory__Class* get_class() {
            return il2cpp::get_class<app::BowArrowTrajectory__Class>(type_info, "", "BowArrowTrajectory");
        }
        inline app::BowArrowTrajectory* create() {
            return il2cpp::create_object<app::BowArrowTrajectory>(get_class());
        }
    } // namespace BowArrowTrajectory
} // namespace app::classes::types
