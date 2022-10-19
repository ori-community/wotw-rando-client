#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundPatrolBehaviourNew {
        namespace {
            inline app::GroundPatrolBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::GroundPatrolBehaviourNew__Class** type_info = &type_info_ref;
        inline app::GroundPatrolBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolBehaviourNew__Class>(type_info, "Moon", "GroundPatrolBehaviourNew");
        }
        inline app::GroundPatrolBehaviourNew* create() {
            return il2cpp::create_object<app::GroundPatrolBehaviourNew>(get_class());
        }
    } // namespace GroundPatrolBehaviourNew
} // namespace app::classes::types
