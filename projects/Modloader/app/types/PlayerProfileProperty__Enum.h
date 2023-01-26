#pragma once
#include <Modloader/app/structs/PlayerProfileProperty__Enum.h>
#include <Modloader/app/structs/PlayerProfileProperty__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerProfileProperty__Enum {
        inline app::PlayerProfileProperty__Enum__Class** type_info() {
            static app::PlayerProfileProperty__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerProfileProperty__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerProfileProperty__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfileProperty__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerProfileProperty");
        }
        inline app::PlayerProfileProperty__Enum* create() {
            return il2cpp::create_object<app::PlayerProfileProperty__Enum>(get_class());
        }
    } // namespace PlayerProfileProperty__Enum
} // namespace app::classes::types
