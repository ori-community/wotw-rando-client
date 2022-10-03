#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityEquippedCondition {
        namespace {
            app::SeinAbilityEquippedCondition__Class* type_info_ref = nullptr;
        }
        app::SeinAbilityEquippedCondition__Class** type_info = &type_info_ref;
        inline app::SeinAbilityEquippedCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityEquippedCondition__Class>(type_info, "", "SeinAbilityEquippedCondition");
        }
        inline app::SeinAbilityEquippedCondition* create() {
            return il2cpp::create_object<app::SeinAbilityEquippedCondition>(get_class());
        }
    } // namespace SeinAbilityEquippedCondition
} // namespace app::classes::types
