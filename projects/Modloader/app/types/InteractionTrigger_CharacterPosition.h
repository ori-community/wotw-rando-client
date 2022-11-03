#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionTrigger_CharacterPosition {
        namespace {
            inline app::InteractionTrigger_CharacterPosition__Class* type_info_ref = nullptr;
        }
        inline app::InteractionTrigger_CharacterPosition__Class** type_info = &type_info_ref;
        inline app::InteractionTrigger_CharacterPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionTrigger_CharacterPosition__Class>(type_info, "RootMotion.FinalIK", "InteractionTrigger", "CharacterPosition");
        }
        inline app::InteractionTrigger_CharacterPosition* create() {
            return il2cpp::create_object<app::InteractionTrigger_CharacterPosition>(get_class());
        }
    } // namespace InteractionTrigger_CharacterPosition
} // namespace app::classes::types
