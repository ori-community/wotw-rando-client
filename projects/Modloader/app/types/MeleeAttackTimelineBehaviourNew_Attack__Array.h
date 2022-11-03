#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeAttackTimelineBehaviourNew_Attack__Array {
        namespace {
            inline app::MeleeAttackTimelineBehaviourNew_Attack__Array__Class* type_info_ref = nullptr;
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Array__Class** type_info = &type_info_ref;
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeAttackTimelineBehaviourNew_Attack__Array__Class>(type_info, "Moon", "MeleeAttackTimelineBehaviourNew+Attack[]");
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Array* create() {
            return il2cpp::create_object<app::MeleeAttackTimelineBehaviourNew_Attack__Array>(get_class());
        }
    } // namespace MeleeAttackTimelineBehaviourNew_Attack__Array
} // namespace app::classes::types
