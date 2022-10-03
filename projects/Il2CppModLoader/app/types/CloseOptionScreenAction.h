#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CloseOptionScreenAction {
        namespace {
            app::CloseOptionScreenAction__Class* type_info_ref = nullptr;
        }
        app::CloseOptionScreenAction__Class** type_info = &type_info_ref;
        inline app::CloseOptionScreenAction__Class* get_class() {
            return il2cpp::get_class<app::CloseOptionScreenAction__Class>(type_info, "", "CloseOptionScreenAction");
        }
        inline app::CloseOptionScreenAction* create() {
            return il2cpp::create_object<app::CloseOptionScreenAction>(get_class());
        }
    } // namespace CloseOptionScreenAction
} // namespace app::classes::types
