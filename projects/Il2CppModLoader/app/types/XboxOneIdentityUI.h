#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneIdentityUI {
        namespace {
            app::XboxOneIdentityUI__Class* type_info_ref = nullptr;
        }
        app::XboxOneIdentityUI__Class** type_info = &type_info_ref;
        inline app::XboxOneIdentityUI__Class* get_class() {
            return il2cpp::get_class<app::XboxOneIdentityUI__Class>(type_info, "", "XboxOneIdentityUI");
        }
        inline app::XboxOneIdentityUI* create() {
            return il2cpp::create_object<app::XboxOneIdentityUI>(get_class());
        }
    } // namespace XboxOneIdentityUI
} // namespace app::classes::types
