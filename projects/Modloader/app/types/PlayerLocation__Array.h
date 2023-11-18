#pragma once
#include <Modloader/app/structs/PlayerLocation__Array.h>
#include <Modloader/app/structs/PlayerLocation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLocation__Array {
        inline app::PlayerLocation__Array__Class** type_info() {
            static app::PlayerLocation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerLocation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerLocation__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLocation__Array__Class>(type_info(), "PlayFab.ServerModels", "PlayerLocation[]");
        }
        inline app::PlayerLocation__Array* create() {
            return il2cpp::create_object<app::PlayerLocation__Array>(get_class());
        }
    } // namespace PlayerLocation__Array
} // namespace app::classes::types
