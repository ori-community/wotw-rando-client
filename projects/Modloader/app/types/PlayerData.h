#pragma once
#include <Modloader/app/structs/PlayerData.h>
#include <Modloader/app/structs/PlayerData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerData {
        inline app::PlayerData__Class** type_info() {
            static app::PlayerData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerData__Class* get_class() {
            return il2cpp::get_class<app::PlayerData__Class>(type_info(), "Moon.Telemetry", "PlayerData");
        }
        inline app::PlayerData* create() {
            return il2cpp::create_object<app::PlayerData>(get_class());
        }
    } // namespace PlayerData
} // namespace app::classes::types
