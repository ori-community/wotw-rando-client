#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSLimitNotEnabledCondition {
        namespace {
            inline app::FPSLimitNotEnabledCondition__Class* type_info_ref = nullptr;
        }
        inline app::FPSLimitNotEnabledCondition__Class** type_info = &type_info_ref;
        inline app::FPSLimitNotEnabledCondition__Class* get_class() {
            return il2cpp::get_class<app::FPSLimitNotEnabledCondition__Class>(type_info, "", "FPSLimitNotEnabledCondition");
        }
        inline app::FPSLimitNotEnabledCondition* create() {
            return il2cpp::create_object<app::FPSLimitNotEnabledCondition>(get_class());
        }
    } // namespace FPSLimitNotEnabledCondition
} // namespace app::classes::types
