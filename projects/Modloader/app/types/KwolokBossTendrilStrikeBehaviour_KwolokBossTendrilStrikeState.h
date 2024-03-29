#pragma once
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState {
        inline app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class** type_info() {
            static app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class>(type_info(), "", "KwolokBossTendrilStrikeBehaviour", "KwolokBossTendrilStrikeState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState
} // namespace app::classes::types
