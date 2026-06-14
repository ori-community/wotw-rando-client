#pragma once
#include <Modloader/app/structs/SeinAbilityBoundCondition.h>
#include <Modloader/app/structs/SeinAbilityBoundCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityBoundCondition {
        inline app::SeinAbilityBoundCondition__Class** type_info() {
            static app::SeinAbilityBoundCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAbilityBoundCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAbilityBoundCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityBoundCondition__Class>(type_info(), "", "SeinAbilityBoundCondition");
        }
        inline app::SeinAbilityBoundCondition* create() {
            return il2cpp::create_object<app::SeinAbilityBoundCondition>(get_class());
        }
    } // namespace SeinAbilityBoundCondition
} // namespace app::classes::types
