#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetTitleScreenAction {
        namespace {
            app::SetTitleScreenAction__Class* type_info_ref = nullptr;
        }
        app::SetTitleScreenAction__Class** type_info = &type_info_ref;
        inline app::SetTitleScreenAction__Class* get_class() {
            return il2cpp::get_class<app::SetTitleScreenAction__Class>(type_info, "", "SetTitleScreenAction");
        }
        inline app::SetTitleScreenAction* create() {
            return il2cpp::create_object<app::SetTitleScreenAction>(get_class());
        }
    } // namespace SetTitleScreenAction
} // namespace app::classes::types
