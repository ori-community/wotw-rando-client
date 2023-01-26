#pragma once
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_AttackState.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_AttackState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour_AttackState {
        inline app::KwolokBossButtSlamBehaviour_AttackState__Class** type_info() {
            static app::KwolokBossButtSlamBehaviour_AttackState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossButtSlamBehaviour_AttackState__Class**)(modloader::win::memory::resolve_rva(0x04726F18));
            }
            return cache;
        }
        inline app::KwolokBossButtSlamBehaviour_AttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossButtSlamBehaviour_AttackState__Class>(type_info(), "", "KwolokBossButtSlamBehaviour", "AttackState");
        }
        inline app::KwolokBossButtSlamBehaviour_AttackState* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour_AttackState>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour_AttackState
} // namespace app::classes::types
