#pragma once
#include <Modloader/app/structs/BehaviourTree.h>
#include <Modloader/app/structs/BehaviourTree__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourTree {
        inline app::BehaviourTree__Class** type_info() {
            static app::BehaviourTree__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BehaviourTree__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BehaviourTree__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTree__Class>(type_info(), "Moon.BehaviourSystem", "BehaviourTree");
        }
        inline app::BehaviourTree* create() {
            return il2cpp::create_object<app::BehaviourTree>(get_class());
        }
    } // namespace BehaviourTree
} // namespace app::classes::types
