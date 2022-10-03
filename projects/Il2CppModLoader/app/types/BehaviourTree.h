#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourTree {
        namespace {
            app::BehaviourTree__Class* type_info_ref = nullptr;
        }
        app::BehaviourTree__Class** type_info = &type_info_ref;
        inline app::BehaviourTree__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTree__Class>(type_info, "Moon.BehaviourSystem", "BehaviourTree");
        }
        inline app::BehaviourTree* create() {
            return il2cpp::create_object<app::BehaviourTree>(get_class());
        }
    } // namespace BehaviourTree
} // namespace app::classes::types
