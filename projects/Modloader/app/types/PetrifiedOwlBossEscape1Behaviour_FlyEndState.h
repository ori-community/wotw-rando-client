#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_FlyEndState.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_FlyEndState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_FlyEndState {
        inline app::PetrifiedOwlBossEscape1Behaviour_FlyEndState__Class** type_info() {
            static app::PetrifiedOwlBossEscape1Behaviour_FlyEndState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossEscape1Behaviour_FlyEndState__Class**)(modloader::win::memory::resolve_rva(0x04768C58));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_FlyEndState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_FlyEndState__Class>(type_info(), "", "PetrifiedOwlBossEscape1Behaviour", "FlyEndState");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_FlyEndState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_FlyEndState>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_FlyEndState
} // namespace app::classes::types
