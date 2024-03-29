#pragma once
#include <Modloader/app/structs/MeleeAttackBehaviourNew_c.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeAttackBehaviourNew_c {
        inline app::MeleeAttackBehaviourNew_c__Class** type_info() {
            static app::MeleeAttackBehaviourNew_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeAttackBehaviourNew_c__Class**)(modloader::win::memory::resolve_rva(0x047684A8));
            }
            return cache;
        }
        inline app::MeleeAttackBehaviourNew_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeAttackBehaviourNew_c__Class>(type_info(), "Moon", "MeleeAttackBehaviourNew", "<>c");
        }
        inline app::MeleeAttackBehaviourNew_c* create() {
            return il2cpp::create_object<app::MeleeAttackBehaviourNew_c>(get_class());
        }
    } // namespace MeleeAttackBehaviourNew_c
} // namespace app::classes::types
