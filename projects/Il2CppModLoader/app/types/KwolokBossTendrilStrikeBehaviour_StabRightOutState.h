#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabRightOutState {
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class** type_info = (app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class**)(modloader::win::memory::resolve_rva(0x0472B1C8));
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour", "StabRightOutState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightOutState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabRightOutState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabRightOutState
} // namespace app::classes::types
