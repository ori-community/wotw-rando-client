#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeAttackTimelineBehaviourNew {
        namespace {
            app::MeleeAttackTimelineBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::MeleeAttackTimelineBehaviourNew__Class** type_info = &type_info_ref;
        inline app::MeleeAttackTimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::MeleeAttackTimelineBehaviourNew__Class>(type_info, "Moon", "MeleeAttackTimelineBehaviourNew");
        }
        inline app::MeleeAttackTimelineBehaviourNew* create() {
            return il2cpp::create_object<app::MeleeAttackTimelineBehaviourNew>(get_class());
        }
    } // namespace MeleeAttackTimelineBehaviourNew
} // namespace app::classes::types
