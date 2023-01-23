#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_AttackState__Class.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_AttackState.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour_AttackState {
        inline app::KwolokBossButtSlamBehaviour_AttackState__Class** type_info = (app::KwolokBossButtSlamBehaviour_AttackState__Class**)(modloader::win::memory::resolve_rva(0x04726F18));
        inline app::KwolokBossButtSlamBehaviour_AttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossButtSlamBehaviour_AttackState__Class>(type_info, "", "KwolokBossButtSlamBehaviour", "AttackState");
        }
        inline app::KwolokBossButtSlamBehaviour_AttackState* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour_AttackState>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour_AttackState
} // namespace app::classes::types
