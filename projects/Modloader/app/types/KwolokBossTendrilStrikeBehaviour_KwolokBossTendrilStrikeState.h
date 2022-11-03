#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState {
        namespace {
            inline app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class** type_info = &type_info_ref;
        inline app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour", "KwolokBossTendrilStrikeState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState
} // namespace app::classes::types
