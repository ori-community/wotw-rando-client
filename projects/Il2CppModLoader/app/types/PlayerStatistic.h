#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerStatistic {
        namespace {
            app::PlayerStatistic__Class* type_info_ref = nullptr;
        }
        app::PlayerStatistic__Class** type_info = &type_info_ref;
        inline app::PlayerStatistic__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatistic__Class>(type_info, "PlayFab.ServerModels", "PlayerStatistic");
        }
        inline app::PlayerStatistic* create() {
            return il2cpp::create_object<app::PlayerStatistic>(get_class());
        }
        inline app::PlayerStatistic__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerStatistic__Array>(get_class(), size);
        }
    } // namespace PlayerStatistic
} // namespace app::classes::types
