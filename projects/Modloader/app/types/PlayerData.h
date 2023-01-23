#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerData__Class.h>
#include <Modloader/app/structs/PlayerData.h>

namespace app::classes::types {
    namespace PlayerData {
        namespace {
            inline app::PlayerData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerData__Class** type_info = &type_info_ref;
        inline app::PlayerData__Class* get_class() {
            return il2cpp::get_class<app::PlayerData__Class>(type_info, "Moon.Telemetry", "PlayerData");
        }
        inline app::PlayerData* create() {
            return il2cpp::create_object<app::PlayerData>(get_class());
        }
    } // namespace PlayerData
} // namespace app::classes::types
