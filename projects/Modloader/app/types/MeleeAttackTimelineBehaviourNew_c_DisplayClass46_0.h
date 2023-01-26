#pragma once
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0.h>
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0 {
        inline app::MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0__Class** type_info() {
            static app::MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0__Class**)(modloader::win::memory::resolve_rva(0x04792E20));
            }
            return cache;
        }
        inline app::MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0__Class>(type_info(), "Moon", "MeleeAttackTimelineBehaviourNew", "<>c__DisplayClass46_0");
        }
        inline app::MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0* create() {
            return il2cpp::create_object<app::MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0>(get_class());
        }
    } // namespace MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0
} // namespace app::classes::types
