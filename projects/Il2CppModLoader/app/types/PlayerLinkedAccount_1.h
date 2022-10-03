#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLinkedAccount_1 {
        namespace {
            app::PlayerLinkedAccount_1__Class* type_info_ref = nullptr;
        }
        app::PlayerLinkedAccount_1__Class** type_info = &type_info_ref;
        inline app::PlayerLinkedAccount_1__Class* get_class() {
            return il2cpp::get_class<app::PlayerLinkedAccount_1__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerLinkedAccount");
        }
        inline app::PlayerLinkedAccount_1* create() {
            return il2cpp::create_object<app::PlayerLinkedAccount_1>(get_class());
        }
        inline app::PlayerLinkedAccount_1__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerLinkedAccount_1__Array>(get_class(), size);
        }
    } // namespace PlayerLinkedAccount_1
} // namespace app::classes::types
