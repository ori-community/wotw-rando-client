#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetCurrentCharacterAction {
        namespace {
            app::SetCurrentCharacterAction__Class* type_info_ref = nullptr;
        }
        app::SetCurrentCharacterAction__Class** type_info = &type_info_ref;
        inline app::SetCurrentCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::SetCurrentCharacterAction__Class>(type_info, "", "SetCurrentCharacterAction");
        }
        inline app::SetCurrentCharacterAction* create() {
            return il2cpp::create_object<app::SetCurrentCharacterAction>(get_class());
        }
    } // namespace SetCurrentCharacterAction
} // namespace app::classes::types
