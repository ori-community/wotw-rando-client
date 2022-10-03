#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLocation__Array {
        namespace {
            app::PlayerLocation__Array__Class* type_info_ref = nullptr;
        }
        app::PlayerLocation__Array__Class** type_info = &type_info_ref;
        inline app::PlayerLocation__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLocation__Array__Class>(type_info, "PlayFab.ServerModels", "PlayerLocation[]");
        }
        inline app::PlayerLocation__Array* create() {
            return il2cpp::create_object<app::PlayerLocation__Array>(get_class());
        }
    } // namespace PlayerLocation__Array
} // namespace app::classes::types
