#pragma once
#include <Modloader/app/structs/ReceivedDamageCondition.h>
#include <Modloader/app/structs/ReceivedDamageCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReceivedDamageCondition {
        inline app::ReceivedDamageCondition__Class** type_info() {
            static app::ReceivedDamageCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReceivedDamageCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReceivedDamageCondition__Class* get_class() {
            return il2cpp::get_class<app::ReceivedDamageCondition__Class>(type_info(), "Moon.BehaviourSystem", "ReceivedDamageCondition");
        }
        inline app::ReceivedDamageCondition* create() {
            return il2cpp::create_object<app::ReceivedDamageCondition>(get_class());
        }
    } // namespace ReceivedDamageCondition
} // namespace app::classes::types
