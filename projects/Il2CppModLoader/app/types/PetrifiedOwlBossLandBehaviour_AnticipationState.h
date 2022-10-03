#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLandBehaviour_AnticipationState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class** type_info;
        inline app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLandBehaviour_AnticipationState__Class>(type_info, "", "PetrifiedOwlBossLandBehaviour", "AnticipationState");
        }
        inline app::PetrifiedOwlBossLandBehaviour_AnticipationState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLandBehaviour_AnticipationState>(get_class());
        }
    } // namespace PetrifiedOwlBossLandBehaviour_AnticipationState
} // namespace app::classes::types
