#pragma once
#include <Modloader/app/structs/CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum.h>
#include <Modloader/app/structs/CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum {
        inline app::CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum__Class** type_info() {
            static app::CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum__Class>(type_info(), "Moon", "CrabClawAttackBehaviourNew", "EAttackMoveDirection");
        }
        inline app::CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum* create() {
            return il2cpp::create_object<app::CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum>(get_class());
        }
    } // namespace CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum
} // namespace app::classes::types
