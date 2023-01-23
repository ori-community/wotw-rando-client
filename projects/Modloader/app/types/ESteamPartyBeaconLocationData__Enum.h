#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ESteamPartyBeaconLocationData__Enum__Class.h>
#include <Modloader/app/structs/ESteamPartyBeaconLocationData__Enum.h>

namespace app::classes::types {
    namespace ESteamPartyBeaconLocationData__Enum {
        namespace {
            inline app::ESteamPartyBeaconLocationData__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ESteamPartyBeaconLocationData__Enum__Class** type_info = &type_info_ref;
        inline app::ESteamPartyBeaconLocationData__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamPartyBeaconLocationData__Enum__Class>(type_info, "Steamworks", "ESteamPartyBeaconLocationData");
        }
        inline app::ESteamPartyBeaconLocationData__Enum* create() {
            return il2cpp::create_object<app::ESteamPartyBeaconLocationData__Enum>(get_class());
        }
    } // namespace ESteamPartyBeaconLocationData__Enum
} // namespace app::classes::types
