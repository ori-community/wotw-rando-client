#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabLeftOutState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Class** type_info;
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour", "StabLeftOutState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabLeftOutState
} // namespace app::classes::types
