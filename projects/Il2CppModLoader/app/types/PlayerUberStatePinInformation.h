#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStatePinInformation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStatePinInformation__Class** type_info;
        inline app::PlayerUberStatePinInformation__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStatePinInformation__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStatePinInformation");
        }
        inline app::PlayerUberStatePinInformation* create() {
            return il2cpp::create_object<app::PlayerUberStatePinInformation>(get_class());
        }
    } // namespace PlayerUberStatePinInformation
} // namespace app::classes::types
