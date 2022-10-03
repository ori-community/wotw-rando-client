#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerData {
        namespace {
            app::PlayerData__Class* type_info_ref = nullptr;
        }
        app::PlayerData__Class** type_info = &type_info_ref;
        inline app::PlayerData__Class* get_class() {
            return il2cpp::get_class<app::PlayerData__Class>(type_info, "Moon.Telemetry", "PlayerData");
        }
        inline app::PlayerData* create() {
            return il2cpp::create_object<app::PlayerData>(get_class());
        }
    } // namespace PlayerData
} // namespace app::classes::types
