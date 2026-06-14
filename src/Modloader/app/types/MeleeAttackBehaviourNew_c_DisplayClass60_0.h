#pragma once
#include <Modloader/app/structs/MeleeAttackBehaviourNew_c_DisplayClass60_0.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew_c_DisplayClass60_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeAttackBehaviourNew_c_DisplayClass60_0 {
        inline app::MeleeAttackBehaviourNew_c_DisplayClass60_0__Class** type_info() {
            static app::MeleeAttackBehaviourNew_c_DisplayClass60_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeAttackBehaviourNew_c_DisplayClass60_0__Class**)(modloader::win::memory::resolve_rva(0x04761CA8));
            }
            return cache;
        }
        inline app::MeleeAttackBehaviourNew_c_DisplayClass60_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeAttackBehaviourNew_c_DisplayClass60_0__Class>(type_info(), "Moon", "MeleeAttackBehaviourNew", "<>c__DisplayClass60_0");
        }
        inline app::MeleeAttackBehaviourNew_c_DisplayClass60_0* create() {
            return il2cpp::create_object<app::MeleeAttackBehaviourNew_c_DisplayClass60_0>(get_class());
        }
    } // namespace MeleeAttackBehaviourNew_c_DisplayClass60_0
} // namespace app::classes::types
