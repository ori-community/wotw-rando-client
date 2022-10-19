#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HasAbilityCondition {
        namespace {
            inline app::HasAbilityCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasAbilityCondition__Class** type_info = &type_info_ref;
        inline app::HasAbilityCondition__Class* get_class() {
            return il2cpp::get_class<app::HasAbilityCondition__Class>(type_info, "", "HasAbilityCondition");
        }
        inline app::HasAbilityCondition* create() {
            return il2cpp::create_object<app::HasAbilityCondition>(get_class());
        }
    } // namespace HasAbilityCondition
} // namespace app::classes::types
