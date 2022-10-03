#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundAreaPatrolBehaviourNew_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GroundAreaPatrolBehaviourNew_c__Class** type_info;
        inline app::GroundAreaPatrolBehaviourNew_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundAreaPatrolBehaviourNew_c__Class>(type_info, "Moon", "GroundAreaPatrolBehaviourNew", "<>c");
        }
        inline app::GroundAreaPatrolBehaviourNew_c* create() {
            return il2cpp::create_object<app::GroundAreaPatrolBehaviourNew_c>(get_class());
        }
    } // namespace GroundAreaPatrolBehaviourNew_c
} // namespace app::classes::types
