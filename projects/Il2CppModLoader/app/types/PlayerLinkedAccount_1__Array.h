#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLinkedAccount_1__Array {
        namespace {
            app::PlayerLinkedAccount_1__Array__Class* type_info_ref = nullptr;
        }
        app::PlayerLinkedAccount_1__Array__Class** type_info = &type_info_ref;
        inline app::PlayerLinkedAccount_1__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLinkedAccount_1__Array__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerLinkedAccount[]");
        }
        inline app::PlayerLinkedAccount_1__Array* create() {
            return il2cpp::create_object<app::PlayerLinkedAccount_1__Array>(get_class());
        }
    } // namespace PlayerLinkedAccount_1__Array
} // namespace app::classes::types
