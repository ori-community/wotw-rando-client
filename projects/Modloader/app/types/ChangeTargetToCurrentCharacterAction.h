#pragma once
#include <Modloader/app/structs/ChangeTargetToCurrentCharacterAction.h>
#include <Modloader/app/structs/ChangeTargetToCurrentCharacterAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeTargetToCurrentCharacterAction {
        inline app::ChangeTargetToCurrentCharacterAction__Class** type_info() {
            static app::ChangeTargetToCurrentCharacterAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeTargetToCurrentCharacterAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeTargetToCurrentCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeTargetToCurrentCharacterAction__Class>(type_info(), "", "ChangeTargetToCurrentCharacterAction");
        }
        inline app::ChangeTargetToCurrentCharacterAction* create() {
            return il2cpp::create_object<app::ChangeTargetToCurrentCharacterAction>(get_class());
        }
    } // namespace ChangeTargetToCurrentCharacterAction
} // namespace app::classes::types
