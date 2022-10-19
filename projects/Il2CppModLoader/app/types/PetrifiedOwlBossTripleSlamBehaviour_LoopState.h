#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour_LoopState {
        inline app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class** type_info = (app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class**)(modloader::win::memory::resolve_rva(0x04716D68));
        inline app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class>(type_info, "", "PetrifiedOwlBossTripleSlamBehaviour", "LoopState");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_LoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour_LoopState>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour_LoopState
} // namespace app::classes::types
