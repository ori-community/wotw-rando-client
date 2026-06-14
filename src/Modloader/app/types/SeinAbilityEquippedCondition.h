#pragma once
#include <Modloader/app/structs/SeinAbilityEquippedCondition.h>
#include <Modloader/app/structs/SeinAbilityEquippedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityEquippedCondition {
        inline app::SeinAbilityEquippedCondition__Class** type_info() {
            static app::SeinAbilityEquippedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAbilityEquippedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAbilityEquippedCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityEquippedCondition__Class>(type_info(), "", "SeinAbilityEquippedCondition");
        }
        inline app::SeinAbilityEquippedCondition* create() {
            return il2cpp::create_object<app::SeinAbilityEquippedCondition>(get_class());
        }
    } // namespace SeinAbilityEquippedCondition
} // namespace app::classes::types
