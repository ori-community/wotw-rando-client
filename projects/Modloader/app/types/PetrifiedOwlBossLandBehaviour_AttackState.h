#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour_AttackState.h>
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour_AttackState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLandBehaviour_AttackState {
        inline app::PetrifiedOwlBossLandBehaviour_AttackState__Class** type_info() {
            static app::PetrifiedOwlBossLandBehaviour_AttackState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLandBehaviour_AttackState__Class**)(modloader::win::memory::resolve_rva(0x0472F570));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLandBehaviour_AttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLandBehaviour_AttackState__Class>(type_info(), "", "PetrifiedOwlBossLandBehaviour", "AttackState");
        }
        inline app::PetrifiedOwlBossLandBehaviour_AttackState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLandBehaviour_AttackState>(get_class());
        }
    } // namespace PetrifiedOwlBossLandBehaviour_AttackState
} // namespace app::classes::types
