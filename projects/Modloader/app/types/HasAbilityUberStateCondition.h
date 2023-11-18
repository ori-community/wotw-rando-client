#pragma once
#include <Modloader/app/structs/HasAbilityUberStateCondition.h>
#include <Modloader/app/structs/HasAbilityUberStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasAbilityUberStateCondition {
        inline app::HasAbilityUberStateCondition__Class** type_info() {
            static app::HasAbilityUberStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasAbilityUberStateCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasAbilityUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::HasAbilityUberStateCondition__Class>(type_info(), "", "HasAbilityUberStateCondition");
        }
        inline app::HasAbilityUberStateCondition* create() {
            return il2cpp::create_object<app::HasAbilityUberStateCondition>(get_class());
        }
    } // namespace HasAbilityUberStateCondition
} // namespace app::classes::types
