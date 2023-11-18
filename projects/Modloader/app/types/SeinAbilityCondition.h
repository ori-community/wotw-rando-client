#pragma once
#include <Modloader/app/structs/SeinAbilityCondition.h>
#include <Modloader/app/structs/SeinAbilityCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityCondition {
        inline app::SeinAbilityCondition__Class** type_info() {
            static app::SeinAbilityCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAbilityCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAbilityCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityCondition__Class>(type_info(), "", "SeinAbilityCondition");
        }
        inline app::SeinAbilityCondition* create() {
            return il2cpp::create_object<app::SeinAbilityCondition>(get_class());
        }
    } // namespace SeinAbilityCondition
} // namespace app::classes::types
