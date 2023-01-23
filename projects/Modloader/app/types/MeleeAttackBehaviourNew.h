#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew__Class.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew.h>

namespace app::classes::types {
    namespace MeleeAttackBehaviourNew {
        namespace {
            inline app::MeleeAttackBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::MeleeAttackBehaviourNew__Class** type_info = &type_info_ref;
        inline app::MeleeAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::MeleeAttackBehaviourNew__Class>(type_info, "Moon", "MeleeAttackBehaviourNew");
        }
        inline app::MeleeAttackBehaviourNew* create() {
            return il2cpp::create_object<app::MeleeAttackBehaviourNew>(get_class());
        }
    } // namespace MeleeAttackBehaviourNew
} // namespace app::classes::types
