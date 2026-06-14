#pragma once
#include <Modloader/app/structs/IsTriggerCollidingCondition.h>
#include <Modloader/app/structs/IsTriggerCollidingCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsTriggerCollidingCondition {
        inline app::IsTriggerCollidingCondition__Class** type_info() {
            static app::IsTriggerCollidingCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsTriggerCollidingCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsTriggerCollidingCondition__Class* get_class() {
            return il2cpp::get_class<app::IsTriggerCollidingCondition__Class>(type_info(), "", "IsTriggerCollidingCondition");
        }
        inline app::IsTriggerCollidingCondition* create() {
            return il2cpp::create_object<app::IsTriggerCollidingCondition>(get_class());
        }
    } // namespace IsTriggerCollidingCondition
} // namespace app::classes::types
