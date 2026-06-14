#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour_AnticipationState.h>
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour_AnticipationState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLandBehaviour_AnticipationState {
        inline app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class** type_info() {
            static app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class**)(modloader::win::memory::resolve_rva(0x047048A0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class>(type_info(), "", "PetrifiedOwlBossLandBehaviour", "AnticipationState");
        }
        inline app::PetrifiedOwlBossLandBehaviour_AnticipationState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLandBehaviour_AnticipationState>(get_class());
        }
    } // namespace PetrifiedOwlBossLandBehaviour_AnticipationState
} // namespace app::classes::types
