#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLocation {
        namespace {
            app::PlayerLocation__Class* type_info_ref = nullptr;
        }
        app::PlayerLocation__Class** type_info = &type_info_ref;
        inline app::PlayerLocation__Class* get_class() {
            return il2cpp::get_class<app::PlayerLocation__Class>(type_info, "PlayFab.ServerModels", "PlayerLocation");
        }
        inline app::PlayerLocation* create() {
            return il2cpp::create_object<app::PlayerLocation>(get_class());
        }
        inline app::PlayerLocation__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerLocation__Array>(get_class(), size);
        }
        inline app::PlayerLocation__Array* create_array(const std::vector<app::PlayerLocation*>& items) {
            return il2cpp::array_new<app::PlayerLocation__Array>(get_class(), items);
        }
    } // namespace PlayerLocation
} // namespace app::classes::types
