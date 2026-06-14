#pragma once
#include <Modloader/app/structs/PlayerStatisticVersion.h>
#include <Modloader/app/structs/PlayerStatisticVersion__Array.h>
#include <Modloader/app/structs/PlayerStatisticVersion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerStatisticVersion {
        inline app::PlayerStatisticVersion__Class** type_info() {
            static app::PlayerStatisticVersion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerStatisticVersion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerStatisticVersion__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatisticVersion__Class>(type_info(), "PlayFab.ClientModels", "PlayerStatisticVersion");
        }
        inline app::PlayerStatisticVersion* create() {
            return il2cpp::create_object<app::PlayerStatisticVersion>(get_class());
        }
        inline app::PlayerStatisticVersion__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerStatisticVersion__Array>(get_class(), size);
        }
        inline app::PlayerStatisticVersion__Array* create_array(const std::vector<app::PlayerStatisticVersion*>& items) {
            return il2cpp::array_new<app::PlayerStatisticVersion__Array>(get_class(), items);
        }
    } // namespace PlayerStatisticVersion
} // namespace app::classes::types
