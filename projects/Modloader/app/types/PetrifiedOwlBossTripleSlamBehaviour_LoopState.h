#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossTripleSlamBehaviour_LoopState.h>
#include <Modloader/app/structs/PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour_LoopState {
        inline app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class** type_info() {
            static app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class**)(modloader::win::memory::resolve_rva(0x04716D68));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossTripleSlamBehaviour_LoopState__Class>(type_info(), "", "PetrifiedOwlBossTripleSlamBehaviour", "LoopState");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_LoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour_LoopState>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour_LoopState
} // namespace app::classes::types
