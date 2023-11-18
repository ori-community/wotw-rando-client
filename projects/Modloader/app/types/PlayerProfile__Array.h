#pragma once
#include <Modloader/app/structs/PlayerProfile__Array.h>
#include <Modloader/app/structs/PlayerProfile__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerProfile__Array {
        inline app::PlayerProfile__Array__Class** type_info() {
            static app::PlayerProfile__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerProfile__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerProfile__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfile__Array__Class>(type_info(), "PlayFab.ServerModels", "PlayerProfile[]");
        }
        inline app::PlayerProfile__Array* create() {
            return il2cpp::create_object<app::PlayerProfile__Array>(get_class());
        }
    } // namespace PlayerProfile__Array
} // namespace app::classes::types
