#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeAttackTimelineBehaviourNew_c {
        inline app::MeleeAttackTimelineBehaviourNew_c__Class** type_info = (app::MeleeAttackTimelineBehaviourNew_c__Class**)(modloader::win::memory::resolve_rva(0x0474E8E8));
        inline app::MeleeAttackTimelineBehaviourNew_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeAttackTimelineBehaviourNew_c__Class>(type_info, "Moon", "MeleeAttackTimelineBehaviourNew", "<>c");
        }
        inline app::MeleeAttackTimelineBehaviourNew_c* create() {
            return il2cpp::create_object<app::MeleeAttackTimelineBehaviourNew_c>(get_class());
        }
    } // namespace MeleeAttackTimelineBehaviourNew_c
} // namespace app::classes::types
