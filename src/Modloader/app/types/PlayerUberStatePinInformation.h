#pragma once
#include <Modloader/app/structs/PlayerUberStatePinInformation.h>
#include <Modloader/app/structs/PlayerUberStatePinInformation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStatePinInformation {
        inline app::PlayerUberStatePinInformation__Class** type_info() {
            static app::PlayerUberStatePinInformation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStatePinInformation__Class**)(modloader::win::memory::resolve_rva(0x04743FA0));
            }
            return cache;
        }
        inline app::PlayerUberStatePinInformation__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStatePinInformation__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStatePinInformation");
        }
        inline app::PlayerUberStatePinInformation* create() {
            return il2cpp::create_object<app::PlayerUberStatePinInformation>(get_class());
        }
    } // namespace PlayerUberStatePinInformation
} // namespace app::classes::types
