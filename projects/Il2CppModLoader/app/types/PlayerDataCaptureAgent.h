#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerDataCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerDataCaptureAgent__Class** type_info;
        inline app::PlayerDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::PlayerDataCaptureAgent__Class>(type_info, "", "PlayerDataCaptureAgent");
        }
        inline app::PlayerDataCaptureAgent* create() {
            return il2cpp::create_object<app::PlayerDataCaptureAgent>(get_class());
        }
    } // namespace PlayerDataCaptureAgent
} // namespace app::classes::types
