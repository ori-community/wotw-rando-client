#pragma once
#include <Modloader/app/structs/SetCurrentCharacterAction_Character__Enum.h>
#include <Modloader/app/structs/SetCurrentCharacterAction_Character__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetCurrentCharacterAction_Character__Enum {
        inline app::SetCurrentCharacterAction_Character__Enum__Class** type_info() {
            static app::SetCurrentCharacterAction_Character__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetCurrentCharacterAction_Character__Enum__Class**)(modloader::win::memory::resolve_rva(0x04754588));
            }
            return cache;
        }
        inline app::SetCurrentCharacterAction_Character__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SetCurrentCharacterAction_Character__Enum__Class>(type_info(), "", "SetCurrentCharacterAction", "Character");
        }
        inline app::SetCurrentCharacterAction_Character__Enum* create() {
            return il2cpp::create_object<app::SetCurrentCharacterAction_Character__Enum>(get_class());
        }
    } // namespace SetCurrentCharacterAction_Character__Enum
} // namespace app::classes::types
