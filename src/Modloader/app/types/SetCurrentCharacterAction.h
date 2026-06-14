#pragma once
#include <Modloader/app/structs/SetCurrentCharacterAction.h>
#include <Modloader/app/structs/SetCurrentCharacterAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetCurrentCharacterAction {
        inline app::SetCurrentCharacterAction__Class** type_info() {
            static app::SetCurrentCharacterAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetCurrentCharacterAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetCurrentCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::SetCurrentCharacterAction__Class>(type_info(), "", "SetCurrentCharacterAction");
        }
        inline app::SetCurrentCharacterAction* create() {
            return il2cpp::create_object<app::SetCurrentCharacterAction>(get_class());
        }
    } // namespace SetCurrentCharacterAction
} // namespace app::classes::types
