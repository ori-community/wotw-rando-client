#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetAbilityOnCondition {
        namespace {
            inline app::GetAbilityOnCondition__Class* type_info_ref = nullptr;
        }
        inline app::GetAbilityOnCondition__Class** type_info = &type_info_ref;
        inline app::GetAbilityOnCondition__Class* get_class() {
            return il2cpp::get_class<app::GetAbilityOnCondition__Class>(type_info, "", "GetAbilityOnCondition");
        }
        inline app::GetAbilityOnCondition* create() {
            return il2cpp::create_object<app::GetAbilityOnCondition>(get_class());
        }
    } // namespace GetAbilityOnCondition
} // namespace app::classes::types
