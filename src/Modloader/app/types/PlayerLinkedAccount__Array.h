#pragma once
#include <Modloader/app/structs/PlayerLinkedAccount__Array.h>
#include <Modloader/app/structs/PlayerLinkedAccount__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLinkedAccount__Array {
        inline app::PlayerLinkedAccount__Array__Class** type_info() {
            static app::PlayerLinkedAccount__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerLinkedAccount__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerLinkedAccount__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLinkedAccount__Array__Class>(type_info(), "PlayFab.ServerModels", "PlayerLinkedAccount[]");
        }
        inline app::PlayerLinkedAccount__Array* create() {
            return il2cpp::create_object<app::PlayerLinkedAccount__Array>(get_class());
        }
    } // namespace PlayerLinkedAccount__Array
} // namespace app::classes::types
