#pragma once
#include <Modloader/app/structs/GetAbilityOnCondition.h>
#include <Modloader/app/structs/GetAbilityOnCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetAbilityOnCondition {
        inline app::GetAbilityOnCondition__Class** type_info() {
            static app::GetAbilityOnCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetAbilityOnCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetAbilityOnCondition__Class* get_class() {
            return il2cpp::get_class<app::GetAbilityOnCondition__Class>(type_info(), "", "GetAbilityOnCondition");
        }
        inline app::GetAbilityOnCondition* create() {
            return il2cpp::create_object<app::GetAbilityOnCondition>(get_class());
        }
    } // namespace GetAbilityOnCondition
} // namespace app::classes::types
