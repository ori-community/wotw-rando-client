#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ESteamPartyBeaconLocationType__Enum {
        namespace {
            inline app::ESteamPartyBeaconLocationType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ESteamPartyBeaconLocationType__Enum__Class** type_info = &type_info_ref;
        inline app::ESteamPartyBeaconLocationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamPartyBeaconLocationType__Enum__Class>(type_info, "Steamworks", "ESteamPartyBeaconLocationType");
        }
        inline app::ESteamPartyBeaconLocationType__Enum* create() {
            return il2cpp::create_object<app::ESteamPartyBeaconLocationType__Enum>(get_class());
        }
    } // namespace ESteamPartyBeaconLocationType__Enum
} // namespace app::classes::types
