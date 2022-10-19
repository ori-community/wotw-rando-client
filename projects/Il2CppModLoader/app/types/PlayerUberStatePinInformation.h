#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStatePinInformation {
        inline app::PlayerUberStatePinInformation__Class** type_info = (app::PlayerUberStatePinInformation__Class**)(modloader::win::memory::resolve_rva(0x04743FA0));
        inline app::PlayerUberStatePinInformation__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStatePinInformation__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStatePinInformation");
        }
        inline app::PlayerUberStatePinInformation* create() {
            return il2cpp::create_object<app::PlayerUberStatePinInformation>(get_class());
        }
    } // namespace PlayerUberStatePinInformation
} // namespace app::classes::types
