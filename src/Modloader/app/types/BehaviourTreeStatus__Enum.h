#pragma once
#include <Modloader/app/structs/BehaviourTreeStatus__Enum.h>
#include <Modloader/app/structs/BehaviourTreeStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeStatus__Enum {
        inline app::BehaviourTreeStatus__Enum__Class** type_info() {
            static app::BehaviourTreeStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BehaviourTreeStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BehaviourTreeStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeStatus__Enum__Class>(type_info(), "UberBehaviourTree", "BehaviourTreeStatus");
        }
        inline app::BehaviourTreeStatus__Enum* create() {
            return il2cpp::create_object<app::BehaviourTreeStatus__Enum>(get_class());
        }
    } // namespace BehaviourTreeStatus__Enum
} // namespace app::classes::types
