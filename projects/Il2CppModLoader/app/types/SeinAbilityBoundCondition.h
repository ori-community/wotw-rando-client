#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinAbilityBoundCondition {
        namespace {
            inline app::SeinAbilityBoundCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinAbilityBoundCondition__Class** type_info = &type_info_ref;
        inline app::SeinAbilityBoundCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityBoundCondition__Class>(type_info, "", "SeinAbilityBoundCondition");
        }
        inline app::SeinAbilityBoundCondition* create() {
            return il2cpp::create_object<app::SeinAbilityBoundCondition>(get_class());
        }
    } // namespace SeinAbilityBoundCondition
} // namespace app::classes::types
