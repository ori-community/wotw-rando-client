#pragma once
#include <Modloader/app/structs/TeleportBeaconDamageReceiver.h>
#include <Modloader/app/structs/TeleportBeaconDamageReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TeleportBeaconDamageReceiver {
        inline app::TeleportBeaconDamageReceiver__Class** type_info() {
            static app::TeleportBeaconDamageReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TeleportBeaconDamageReceiver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TeleportBeaconDamageReceiver__Class* get_class() {
            return il2cpp::get_class<app::TeleportBeaconDamageReceiver__Class>(type_info(), "", "TeleportBeaconDamageReceiver");
        }
        inline app::TeleportBeaconDamageReceiver* create() {
            return il2cpp::create_object<app::TeleportBeaconDamageReceiver>(get_class());
        }
    } // namespace TeleportBeaconDamageReceiver
} // namespace app::classes::types
