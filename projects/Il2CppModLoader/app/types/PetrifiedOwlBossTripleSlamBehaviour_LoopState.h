#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour_LoopState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class** type_info;
        inline app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class>(type_info, "", "PetrifiedOwlBossTripleSlamBehaviour", "LoopState");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_LoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour_LoopState>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour_LoopState
} // namespace app::classes::types
