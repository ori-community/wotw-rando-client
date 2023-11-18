#pragma once
#include <Modloader/app/structs/PlayerStatisticVersion__Array.h>
#include <Modloader/app/structs/PlayerStatisticVersion__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerStatisticVersion__Array {
        inline app::PlayerStatisticVersion__Array__Class** type_info() {
            static app::PlayerStatisticVersion__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerStatisticVersion__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerStatisticVersion__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatisticVersion__Array__Class>(type_info(), "PlayFab.ClientModels", "PlayerStatisticVersion[]");
        }
        inline app::PlayerStatisticVersion__Array* create() {
            return il2cpp::create_object<app::PlayerStatisticVersion__Array>(get_class());
        }
    } // namespace PlayerStatisticVersion__Array
} // namespace app::classes::types
