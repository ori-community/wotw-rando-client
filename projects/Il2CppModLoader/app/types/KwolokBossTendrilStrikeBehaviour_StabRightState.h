#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabRightState {
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class** type_info = (app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class**)(modloader::win::memory::resolve_rva(0x04786830));
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour", "StabRightState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabRightState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabRightState
} // namespace app::classes::types
