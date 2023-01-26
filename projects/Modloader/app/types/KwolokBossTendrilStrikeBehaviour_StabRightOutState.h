#pragma once
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabRightOutState.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabRightOutState {
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class** type_info() {
            static app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class**)(modloader::win::memory::resolve_rva(0x0472B1C8));
            }
            return cache;
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class>(type_info(), "", "KwolokBossTendrilStrikeBehaviour", "StabRightOutState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabRightOutState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabRightOutState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabRightOutState
} // namespace app::classes::types
