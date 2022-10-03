#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour_EndState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class** type_info;
        inline app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class>(type_info, "", "PetrifiedOwlBossTripleSlamBehaviour", "EndState");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_EndState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour_EndState>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour_EndState
} // namespace app::classes::types
