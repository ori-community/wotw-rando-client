#pragma once
#include <Modloader/app/structs/PlayerLinkedAccount.h>
#include <Modloader/app/structs/PlayerLinkedAccount__Array.h>
#include <Modloader/app/structs/PlayerLinkedAccount__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLinkedAccount {
        inline app::PlayerLinkedAccount__Class** type_info() {
            static app::PlayerLinkedAccount__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerLinkedAccount__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerLinkedAccount__Class* get_class() {
            return il2cpp::get_class<app::PlayerLinkedAccount__Class>(type_info(), "PlayFab.ServerModels", "PlayerLinkedAccount");
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
