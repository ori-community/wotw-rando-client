#pragma once
#include <Modloader/app/structs/FPSLimitNotEnabledCondition.h>
#include <Modloader/app/structs/FPSLimitNotEnabledCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSLimitNotEnabledCondition {
        inline app::FPSLimitNotEnabledCondition__Class** type_info() {
            static app::FPSLimitNotEnabledCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FPSLimitNotEnabledCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FPSLimitNotEnabledCondition__Class* get_class() {
            return il2cpp::get_class<app::FPSLimitNotEnabledCondition__Class>(type_info(), "", "FPSLimitNotEnabledCondition");
        }
        inline app::FPSLimitNotEnabledCondition* create() {
            return il2cpp::create_object<app::FPSLimitNotEnabledCondition>(get_class());
        }
    } // namespace FPSLimitNotEnabledCondition
} // namespace app::classes::types
