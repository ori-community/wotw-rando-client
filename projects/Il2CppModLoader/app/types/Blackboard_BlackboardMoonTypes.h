#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Blackboard_BlackboardMoonTypes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Blackboard_BlackboardMoonTypes__Class** type_info;
        inline app::Blackboard_BlackboardMoonTypes__Class* get_class() {
            return il2cpp::get_nested_class<app::Blackboard_BlackboardMoonTypes__Class>(type_info, "Moon.BehaviourSystem", "Blackboard", "BlackboardMoonTypes");
        }
        inline app::Blackboard_BlackboardMoonTypes* create() {
            return il2cpp::create_object<app::Blackboard_BlackboardMoonTypes>(get_class());
        }
    } // namespace Blackboard_BlackboardMoonTypes
} // namespace app::classes::types
