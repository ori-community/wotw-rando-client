#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerLinkedAccount {
        namespace {
            inline app::PlayerLinkedAccount__Class* type_info_ref = nullptr;
        }
        inline app::PlayerLinkedAccount__Class** type_info = &type_info_ref;
        inline app::PlayerLinkedAccount__Class* get_class() {
            return il2cpp::get_class<app::PlayerLinkedAccount__Class>(type_info, "PlayFab.ServerModels", "PlayerLinkedAccount");
        }
        inline app::PlayerLinkedAccount* create() {
            return il2cpp::create_object<app::PlayerLinkedAccount>(get_class());
        }
        inline app::PlayerLinkedAccount__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerLinkedAccount__Array>(get_class(), size);
        }
        inline app::PlayerLinkedAccount__Array* create_array(const std::vector<app::PlayerLinkedAccount*>& items) {
            return il2cpp::array_new<app::PlayerLinkedAccount__Array>(get_class(), items);
        }
    } // namespace PlayerLinkedAccount
} // namespace app::classes::types
