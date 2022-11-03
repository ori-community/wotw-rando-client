#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeAttackBehaviourNew_DamageDirectionType__Enum {
        namespace {
            inline app::MeleeAttackBehaviourNew_DamageDirectionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MeleeAttackBehaviourNew_DamageDirectionType__Enum__Class** type_info = &type_info_ref;
        inline app::MeleeAttackBehaviourNew_DamageDirectionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeAttackBehaviourNew_DamageDirectionType__Enum__Class>(type_info, "Moon", "MeleeAttackBehaviourNew", "DamageDirectionType");
        }
        inline app::MeleeAttackBehaviourNew_DamageDirectionType__Enum* create() {
            return il2cpp::create_object<app::MeleeAttackBehaviourNew_DamageDirectionType__Enum>(get_class());
        }
    } // namespace MeleeAttackBehaviourNew_DamageDirectionType__Enum
} // namespace app::classes::types
