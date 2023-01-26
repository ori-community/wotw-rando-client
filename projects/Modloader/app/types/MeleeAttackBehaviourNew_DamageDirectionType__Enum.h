#pragma once
#include <Modloader/app/structs/MeleeAttackBehaviourNew_DamageDirectionType__Enum.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew_DamageDirectionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeAttackBehaviourNew_DamageDirectionType__Enum {
        inline app::MeleeAttackBehaviourNew_DamageDirectionType__Enum__Class** type_info() {
            static app::MeleeAttackBehaviourNew_DamageDirectionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeAttackBehaviourNew_DamageDirectionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeAttackBehaviourNew_DamageDirectionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeAttackBehaviourNew_DamageDirectionType__Enum__Class>(type_info(), "Moon", "MeleeAttackBehaviourNew", "DamageDirectionType");
        }
        inline app::MeleeAttackBehaviourNew_DamageDirectionType__Enum* create() {
            return il2cpp::create_object<app::MeleeAttackBehaviourNew_DamageDirectionType__Enum>(get_class());
        }
    } // namespace MeleeAttackBehaviourNew_DamageDirectionType__Enum
} // namespace app::classes::types
