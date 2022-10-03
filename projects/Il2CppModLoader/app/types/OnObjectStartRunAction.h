#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnObjectStartRunAction {
        namespace {
            app::OnObjectStartRunAction__Class* type_info_ref = nullptr;
        }
        app::OnObjectStartRunAction__Class** type_info = &type_info_ref;
        inline app::OnObjectStartRunAction__Class* get_class() {
            return il2cpp::get_class<app::OnObjectStartRunAction__Class>(type_info, "", "OnObjectStartRunAction");
        }
        inline app::OnObjectStartRunAction* create() {
            return il2cpp::create_object<app::OnObjectStartRunAction>(get_class());
        }
    } // namespace OnObjectStartRunAction
} // namespace app::classes::types
