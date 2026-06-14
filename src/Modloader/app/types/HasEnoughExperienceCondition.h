#pragma once
#include <Modloader/app/structs/HasEnoughExperienceCondition.h>
#include <Modloader/app/structs/HasEnoughExperienceCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasEnoughExperienceCondition {
        inline app::HasEnoughExperienceCondition__Class** type_info() {
            static app::HasEnoughExperienceCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasEnoughExperienceCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasEnoughExperienceCondition__Class* get_class() {
            return il2cpp::get_class<app::HasEnoughExperienceCondition__Class>(type_info(), "", "HasEnoughExperienceCondition");
        }
        inline app::HasEnoughExperienceCondition* create() {
            return il2cpp::create_object<app::HasEnoughExperienceCondition>(get_class());
        }
    } // namespace HasEnoughExperienceCondition
} // namespace app::classes::types
