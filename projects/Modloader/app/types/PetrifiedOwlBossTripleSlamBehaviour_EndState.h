#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossTripleSlamBehaviour_EndState.h>
#include <Modloader/app/structs/PetrifiedOwlBossTripleSlamBehaviour_EndState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour_EndState {
        inline app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class** type_info() {
            static app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class**)(modloader::win::memory::resolve_rva(0x047587F8));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class>(type_info(), "", "PetrifiedOwlBossTripleSlamBehaviour", "EndState");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_EndState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour_EndState>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour_EndState
} // namespace app::classes::types
