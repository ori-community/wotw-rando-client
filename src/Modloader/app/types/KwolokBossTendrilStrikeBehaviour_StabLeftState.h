#pragma once
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabLeftState.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabLeftState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabLeftState {
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class** type_info() {
            static app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class**)(modloader::win::memory::resolve_rva(0x04713470));
            }
            return cache;
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class>(type_info(), "", "KwolokBossTendrilStrikeBehaviour", "StabLeftState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabLeftState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabLeftState
} // namespace app::classes::types
