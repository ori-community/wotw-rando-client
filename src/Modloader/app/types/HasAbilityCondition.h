#pragma once
#include <Modloader/app/structs/HasAbilityCondition.h>
#include <Modloader/app/structs/HasAbilityCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasAbilityCondition {
        inline app::HasAbilityCondition__Class** type_info() {
            static app::HasAbilityCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasAbilityCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasAbilityCondition__Class* get_class() {
            return il2cpp::get_class<app::HasAbilityCondition__Class>(type_info(), "", "HasAbilityCondition");
        }
        inline app::HasAbilityCondition* create() {
            return il2cpp::create_object<app::HasAbilityCondition>(get_class());
        }
    } // namespace HasAbilityCondition
} // namespace app::classes::types
