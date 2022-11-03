#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeAttackBehaviourNew_Attack__Array {
        namespace {
            inline app::MeleeAttackBehaviourNew_Attack__Array__Class* type_info_ref = nullptr;
        }
        inline app::MeleeAttackBehaviourNew_Attack__Array__Class** type_info = &type_info_ref;
        inline app::MeleeAttackBehaviourNew_Attack__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeAttackBehaviourNew_Attack__Array__Class>(type_info, "Moon", "MeleeAttackBehaviourNew+Attack[]");
        }
        inline app::MeleeAttackBehaviourNew_Attack__Array* create() {
            return il2cpp::create_object<app::MeleeAttackBehaviourNew_Attack__Array>(get_class());
        }
    } // namespace MeleeAttackBehaviourNew_Attack__Array
} // namespace app::classes::types
