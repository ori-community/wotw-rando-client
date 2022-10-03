#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityBoundCondition {
        namespace {
            app::SeinAbilityBoundCondition__Class* type_info_ref = nullptr;
        }
        app::SeinAbilityBoundCondition__Class** type_info = &type_info_ref;
        inline app::SeinAbilityBoundCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityBoundCondition__Class>(type_info, "", "SeinAbilityBoundCondition");
        }
        inline app::SeinAbilityBoundCondition* create() {
            return il2cpp::create_object<app::SeinAbilityBoundCondition>(get_class());
        }
    } // namespace SeinAbilityBoundCondition
} // namespace app::classes::types
