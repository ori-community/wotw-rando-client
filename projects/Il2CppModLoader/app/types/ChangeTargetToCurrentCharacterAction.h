#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeTargetToCurrentCharacterAction {
        namespace {
            app::ChangeTargetToCurrentCharacterAction__Class* type_info_ref = nullptr;
        }
        app::ChangeTargetToCurrentCharacterAction__Class** type_info = &type_info_ref;
        inline app::ChangeTargetToCurrentCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeTargetToCurrentCharacterAction__Class>(type_info, "", "ChangeTargetToCurrentCharacterAction");
        }
        inline app::ChangeTargetToCurrentCharacterAction* create() {
            return il2cpp::create_object<app::ChangeTargetToCurrentCharacterAction>(get_class());
        }
    } // namespace ChangeTargetToCurrentCharacterAction
} // namespace app::classes::types
