#pragma once
#include <Modloader/app/structs/InteractionTrigger_CharacterPosition.h>
#include <Modloader/app/structs/InteractionTrigger_CharacterPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionTrigger_CharacterPosition {
        inline app::InteractionTrigger_CharacterPosition__Class** type_info() {
            static app::InteractionTrigger_CharacterPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionTrigger_CharacterPosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionTrigger_CharacterPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionTrigger_CharacterPosition__Class>(type_info(), "RootMotion.FinalIK", "InteractionTrigger", "CharacterPosition");
        }
        inline app::InteractionTrigger_CharacterPosition* create() {
            return il2cpp::create_object<app::InteractionTrigger_CharacterPosition>(get_class());
        }
    } // namespace InteractionTrigger_CharacterPosition
} // namespace app::classes::types
