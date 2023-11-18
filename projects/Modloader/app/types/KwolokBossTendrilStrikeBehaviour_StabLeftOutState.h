#pragma once
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabLeftOutState.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabLeftOutState {
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Class** type_info() {
            static app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Class**)(modloader::win::memory::resolve_rva(0x04774358));
            }
            return cache;
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Class>(type_info(), "", "KwolokBossTendrilStrikeBehaviour", "StabLeftOutState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabLeftOutState
} // namespace app::classes::types
