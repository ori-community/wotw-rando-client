#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLandBehaviour_AnticipationState {
        inline app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class** type_info = (app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class**)(modloader::win::memory::resolve_rva(0x047048A0));
        inline app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class>(type_info, "", "PetrifiedOwlBossLandBehaviour", "AnticipationState");
        }
        inline app::PetrifiedOwlBossLandBehaviour_AnticipationState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLandBehaviour_AnticipationState>(get_class());
        }
    } // namespace PetrifiedOwlBossLandBehaviour_AnticipationState
} // namespace app::classes::types
