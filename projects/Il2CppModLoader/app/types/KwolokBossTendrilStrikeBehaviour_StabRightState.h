#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabRightState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class** type_info;
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour", "StabRightState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabRightState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabRightState
} // namespace app::classes::types
