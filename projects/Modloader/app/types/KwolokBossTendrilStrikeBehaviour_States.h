#pragma once
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_States.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_States {
        inline app::KwolokBossTendrilStrikeBehaviour_States__Class** type_info() {
            static app::KwolokBossTendrilStrikeBehaviour_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossTendrilStrikeBehaviour_States__Class**)(modloader::win::memory::resolve_rva(0x04746A78));
            }
            return cache;
        }
        inline app::KwolokBossTendrilStrikeBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_States__Class>(type_info(), "", "KwolokBossTendrilStrikeBehaviour", "States");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_States* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_States>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_States
} // namespace app::classes::types
