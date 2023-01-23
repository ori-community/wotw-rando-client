#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TeleportBeaconDamageReceiver__Class.h>
#include <Modloader/app/structs/TeleportBeaconDamageReceiver.h>

namespace app::classes::types {
    namespace TeleportBeaconDamageReceiver {
        namespace {
            inline app::TeleportBeaconDamageReceiver__Class* type_info_ref = nullptr;
        }
        inline app::TeleportBeaconDamageReceiver__Class** type_info = &type_info_ref;
        inline app::TeleportBeaconDamageReceiver__Class* get_class() {
            return il2cpp::get_class<app::TeleportBeaconDamageReceiver__Class>(type_info, "", "TeleportBeaconDamageReceiver");
        }
        inline app::TeleportBeaconDamageReceiver* create() {
            return il2cpp::create_object<app::TeleportBeaconDamageReceiver>(get_class());
        }
    } // namespace TeleportBeaconDamageReceiver
} // namespace app::classes::types
