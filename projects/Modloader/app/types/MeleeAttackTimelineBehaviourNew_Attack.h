#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeAttackTimelineBehaviourNew_Attack {
        namespace {
            inline app::MeleeAttackTimelineBehaviourNew_Attack__Class* type_info_ref = nullptr;
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Class** type_info = &type_info_ref;
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeAttackTimelineBehaviourNew_Attack__Class>(type_info, "Moon", "MeleeAttackTimelineBehaviourNew", "Attack");
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack* create() {
            return il2cpp::create_object<app::MeleeAttackTimelineBehaviourNew_Attack>(get_class());
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Array* create_array(int size) {
            return il2cpp::array_new<app::MeleeAttackTimelineBehaviourNew_Attack__Array>(get_class(), size);
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Array* create_array(const std::vector<app::MeleeAttackTimelineBehaviourNew_Attack*>& items) {
            return il2cpp::array_new<app::MeleeAttackTimelineBehaviourNew_Attack__Array>(get_class(), items);
        }
    } // namespace MeleeAttackTimelineBehaviourNew_Attack
} // namespace app::classes::types
