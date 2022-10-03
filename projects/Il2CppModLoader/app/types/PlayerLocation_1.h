#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLocation_1 {
        namespace {
            app::PlayerLocation_1__Class* type_info_ref = nullptr;
        }
        app::PlayerLocation_1__Class** type_info = &type_info_ref;
        inline app::PlayerLocation_1__Class* get_class() {
            return il2cpp::get_class<app::PlayerLocation_1__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerLocation");
        }
        inline app::PlayerLocation_1* create() {
            return il2cpp::create_object<app::PlayerLocation_1>(get_class());
        }
        inline app::PlayerLocation_1__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerLocation_1__Array>(get_class(), size);
        }
    } // namespace PlayerLocation_1
} // namespace app::classes::types
