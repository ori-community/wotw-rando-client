#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasAbilityUberStateCondition {
        namespace {
            app::HasAbilityUberStateCondition__Class* type_info_ref = nullptr;
        }
        app::HasAbilityUberStateCondition__Class** type_info = &type_info_ref;
        inline app::HasAbilityUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::HasAbilityUberStateCondition__Class>(type_info, "", "HasAbilityUberStateCondition");
        }
        inline app::HasAbilityUberStateCondition* create() {
            return il2cpp::create_object<app::HasAbilityUberStateCondition>(get_class());
        }
    } // namespace HasAbilityUberStateCondition
} // namespace app::classes::types
