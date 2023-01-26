#pragma once
#include <Modloader/app/structs/ESteamPartyBeaconLocationData__Enum.h>
#include <Modloader/app/structs/ESteamPartyBeaconLocationData__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ESteamPartyBeaconLocationData__Enum {
        inline app::ESteamPartyBeaconLocationData__Enum__Class** type_info() {
            static app::ESteamPartyBeaconLocationData__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ESteamPartyBeaconLocationData__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ESteamPartyBeaconLocationData__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamPartyBeaconLocationData__Enum__Class>(type_info(), "Steamworks", "ESteamPartyBeaconLocationData");
        }
        inline app::ESteamPartyBeaconLocationData__Enum* create() {
            return il2cpp::create_object<app::ESteamPartyBeaconLocationData__Enum>(get_class());
        }
    } // namespace ESteamPartyBeaconLocationData__Enum
} // namespace app::classes::types
