#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourTreeBuilder__Class** type_info;
        inline app::BehaviourTreeBuilder__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeBuilder__Class>(type_info, "UberBehaviourTree", "BehaviourTreeBuilder");
        }
        inline app::BehaviourTreeBuilder* create() {
            return il2cpp::create_object<app::BehaviourTreeBuilder>(get_class());
        }
    } // namespace BehaviourTreeBuilder
} // namespace app::classes::types
