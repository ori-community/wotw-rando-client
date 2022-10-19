#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour_StartState {
        inline app::PetrifiedOwlBossTripleSlamBehaviour_StartState__Class** type_info = (app::PetrifiedOwlBossTripleSlamBehaviour_StartState__Class**)(modloader::win::memory::resolve_rva(0x04744F68));
        inline app::PetrifiedOwlBossTripleSlamBehaviour_StartState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossTripleSlamBehaviour_StartState__Class>(type_info, "", "PetrifiedOwlBossTripleSlamBehaviour", "StartState");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_StartState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour_StartState>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour_StartState
} // namespace app::classes::types
