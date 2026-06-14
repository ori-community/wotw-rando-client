#pragma once
#include <Modloader/app/structs/BendGoal.h>
#include <Modloader/app/structs/BendGoal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BendGoal {
        inline app::BendGoal__Class** type_info() {
            static app::BendGoal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BendGoal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BendGoal__Class* get_class() {
            return il2cpp::get_class<app::BendGoal__Class>(type_info(), "RootMotion.Demos", "BendGoal");
        }
        inline app::BendGoal* create() {
            return il2cpp::create_object<app::BendGoal>(get_class());
        }
    } // namespace BendGoal
} // namespace app::classes::types
