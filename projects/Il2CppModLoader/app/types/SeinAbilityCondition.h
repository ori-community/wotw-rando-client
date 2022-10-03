#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityCondition {
        namespace {
            app::SeinAbilityCondition__Class* type_info_ref = nullptr;
        }
        app::SeinAbilityCondition__Class** type_info = &type_info_ref;
        inline app::SeinAbilityCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityCondition__Class>(type_info, "", "SeinAbilityCondition");
        }
        inline app::SeinAbilityCondition* create() {
            return il2cpp::create_object<app::SeinAbilityCondition>(get_class());
        }
    } // namespace SeinAbilityCondition
} // namespace app::classes::types
