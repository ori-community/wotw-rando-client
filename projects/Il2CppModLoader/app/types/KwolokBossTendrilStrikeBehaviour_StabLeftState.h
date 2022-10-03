#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabLeftState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class** type_info;
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour", "StabLeftState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabLeftState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabLeftState
} // namespace app::classes::types
