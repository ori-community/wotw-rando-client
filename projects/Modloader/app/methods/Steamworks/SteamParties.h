#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PartyBeaconID_t.h>
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/SteamPartyBeaconLocation_t.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/SteamPartyBeaconLocation_t__Array.h>
#include <Modloader/app/structs/ESteamPartyBeaconLocationData__Enum.h>

namespace app::classes::Steamworks::SteamParties {
    IL2CPP_REGISTER_METHOD(0x0278ED90, uint32_t, GetNumActiveBeacons, ())
    IL2CPP_REGISTER_METHOD(0x0278EE40, app::PartyBeaconID_t, GetBeaconByIndex, (uint32_t un_index))
    IL2CPP_REGISTER_METHOD(0x0278EF80, bool, GetBeaconDetails, (app::PartyBeaconID_t ul_beacon_i_d, app::CSteamID* p_steam_i_d_beacon_owner, app::SteamPartyBeaconLocation_t* p_location, app::String** pch_metadata, int32_t cch_metadata))
    IL2CPP_REGISTER_METHOD(0x0278F140, app::SteamAPICall_t, JoinParty, (app::PartyBeaconID_t ul_beacon_i_d))
    IL2CPP_REGISTER_METHOD(0x0278F280, bool, GetNumAvailableBeaconLocations, (uint32_t * pu_num_locations))
    IL2CPP_REGISTER_METHOD(0x0278F340, bool, GetAvailableBeaconLocations, (app::SteamPartyBeaconLocation_t__Array * p_location_list, uint32_t u_max_num_locations))
    IL2CPP_REGISTER_METHOD(0x0278F410, app::SteamAPICall_t, CreateBeacon, (uint32_t un_open_slots, app::SteamPartyBeaconLocation_t* p_beacon_location, app::String* pch_connect_string, app::String* pch_metadata))
    IL2CPP_REGISTER_METHOD(0x0278F8A0, void, OnReservationCompleted, (app::PartyBeaconID_t ul_beacon, app::CSteamID steam_i_d_user))
    IL2CPP_REGISTER_METHOD(0x0278F970, void, CancelReservation, (app::PartyBeaconID_t ul_beacon, app::CSteamID steam_i_d_user))
    IL2CPP_REGISTER_METHOD(0x0278FA40, app::SteamAPICall_t, ChangeNumOpenSlots, (app::PartyBeaconID_t ul_beacon, uint32_t un_open_slots))
    IL2CPP_REGISTER_METHOD(0x0278FB90, bool, DestroyBeacon, (app::PartyBeaconID_t ul_beacon))
    IL2CPP_REGISTER_METHOD(0x0278FC50, bool, GetBeaconLocationData, (app::SteamPartyBeaconLocation_t beacon_location, app::ESteamPartyBeaconLocationData__Enum e_data, app::String** pch_data_string_out, int32_t cch_data_string_out))
} // namespace app::classes::Steamworks::SteamParties
