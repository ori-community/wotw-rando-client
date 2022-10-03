#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Blackboard {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Blackboard__Class** type_info;
        inline app::Blackboard__Class* get_class() {
            return il2cpp::get_class<app::Blackboard__Class>(type_info, "Moon.BehaviourSystem", "Blackboard");
        }
        inline app::Blackboard* create() {
            return il2cpp::create_object<app::Blackboard>(get_class());
        }
    } // namespace Blackboard
} // namespace app::classes::types
