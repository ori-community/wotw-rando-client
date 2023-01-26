#pragma once
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabRightState.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabRightState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabRightState {
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class** type_info() {
            static app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class**)(modloader::win::memory::resolve_rva(0x04786830));
            }
            return cache;
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabRightState__Class>(type_info(), "", "KwolokBossTendrilStrikeBehaviour", "StabRightState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabRightState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabRightState
} // namespace app::classes::types
