#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerConnectionState__Enum {
        namespace {
            app::PlayerConnectionState__Enum__Class* type_info_ref = nullptr;
        }
        app::PlayerConnectionState__Enum__Class** type_info = &type_info_ref;
        inline app::PlayerConnectionState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayerConnectionState__Enum__Class>(type_info, "PlayFab.ServerModels", "PlayerConnectionState");
        }
        inline app::PlayerConnectionState__Enum* create() {
            return il2cpp::create_object<app::PlayerConnectionState__Enum>(get_class());
        }
    } // namespace PlayerConnectionState__Enum
} // namespace app::classes::types
