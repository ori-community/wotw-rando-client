#pragma once
#include <Modloader/app/structs/SkeetoDiveAttackBehaviour_DiveAttackState__Enum.h>
#include <Modloader/app/structs/SkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoDiveAttackBehaviour_DiveAttackState__Enum {
        inline app::SkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class** type_info() {
            static app::SkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class>(type_info(), "", "SkeetoDiveAttackBehaviour", "DiveAttackState");
        }
        inline app::SkeetoDiveAttackBehaviour_DiveAttackState__Enum* create() {
            return il2cpp::create_object<app::SkeetoDiveAttackBehaviour_DiveAttackState__Enum>(get_class());
        }
    } // namespace SkeetoDiveAttackBehaviour_DiveAttackState__Enum
} // namespace app::classes::types
