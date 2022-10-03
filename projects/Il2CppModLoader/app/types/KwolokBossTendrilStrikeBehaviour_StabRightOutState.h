#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabRightOutState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class** type_info;
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour", "StabRightOutState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightOutState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabRightOutState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabRightOutState
} // namespace app::classes::types
