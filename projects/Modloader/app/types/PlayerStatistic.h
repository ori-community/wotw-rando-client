#pragma once
#include <Modloader/app/structs/PlayerStatistic.h>
#include <Modloader/app/structs/PlayerStatistic__Array.h>
#include <Modloader/app/structs/PlayerStatistic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerStatistic {
        inline app::PlayerStatistic__Class** type_info() {
            static app::PlayerStatistic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerStatistic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerStatistic__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatistic__Class>(type_info(), "PlayFab.ServerModels", "PlayerStatistic");
        }
        inline app::PlayerStatistic* create() {
            return il2cpp::create_object<app::PlayerStatistic>(get_class());
        }
        inline app::PlayerStatistic__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerStatistic__Array>(get_class(), size);
        }
        inline app::PlayerStatistic__Array* create_array(const std::vector<app::PlayerStatistic*>& items) {
            return il2cpp::array_new<app::PlayerStatistic__Array>(get_class(), items);
        }
    } // namespace PlayerStatistic
} // namespace app::classes::types
