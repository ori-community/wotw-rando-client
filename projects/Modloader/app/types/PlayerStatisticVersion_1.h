#pragma once
#include <Modloader/app/structs/PlayerStatisticVersion_1.h>
#include <Modloader/app/structs/PlayerStatisticVersion_1__Array.h>
#include <Modloader/app/structs/PlayerStatisticVersion_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerStatisticVersion_1 {
        inline app::PlayerStatisticVersion_1__Class** type_info() {
            static app::PlayerStatisticVersion_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerStatisticVersion_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerStatisticVersion_1__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatisticVersion_1__Class>(type_info(), "PlayFab.ServerModels", "PlayerStatisticVersion");
        }
        inline app::PlayerStatisticVersion_1* create() {
            return il2cpp::create_object<app::PlayerStatisticVersion_1>(get_class());
        }
        inline app::PlayerStatisticVersion_1__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerStatisticVersion_1__Array>(get_class(), size);
        }
        inline app::PlayerStatisticVersion_1__Array* create_array(const std::vector<app::PlayerStatisticVersion_1*>& items) {
            return il2cpp::array_new<app::PlayerStatisticVersion_1__Array>(get_class(), items);
        }
    } // namespace PlayerStatisticVersion_1
} // namespace app::classes::types
