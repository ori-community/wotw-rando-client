#pragma once
#include <Modloader/app/structs/DamageReceiverCondition.h>
#include <Modloader/app/structs/DamageReceiverCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageReceiverCondition {
        inline app::DamageReceiverCondition__Class** type_info() {
            static app::DamageReceiverCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageReceiverCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageReceiverCondition__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiverCondition__Class>(type_info(), "", "DamageReceiverCondition");
        }
        inline app::DamageReceiverCondition* create() {
            return il2cpp::create_object<app::DamageReceiverCondition>(get_class());
        }
    } // namespace DamageReceiverCondition
} // namespace app::classes::types
