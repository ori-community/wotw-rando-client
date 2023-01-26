#pragma once
#include <Modloader/app/structs/PlayerStatistic__Array.h>
#include <Modloader/app/structs/PlayerStatistic__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerStatistic__Array {
        inline app::PlayerStatistic__Array__Class** type_info() {
            static app::PlayerStatistic__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerStatistic__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerStatistic__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatistic__Array__Class>(type_info(), "PlayFab.ServerModels", "PlayerStatistic[]");
        }
        inline app::PlayerStatistic__Array* create() {
            return il2cpp::create_object<app::PlayerStatistic__Array>(get_class());
        }
    } // namespace PlayerStatistic__Array
} // namespace app::classes::types
