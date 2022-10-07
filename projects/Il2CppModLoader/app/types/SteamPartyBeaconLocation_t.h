#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamPartyBeaconLocation_t {
        namespace {
            app::SteamPartyBeaconLocation_t__Class* type_info_ref = nullptr;
        }
        app::SteamPartyBeaconLocation_t__Class** type_info = &type_info_ref;
        inline app::SteamPartyBeaconLocation_t__Class* get_class() {
            return il2cpp::get_class<app::SteamPartyBeaconLocation_t__Class>(type_info, "Steamworks", "SteamPartyBeaconLocation_t");
        }
        inline app::SteamPartyBeaconLocation_t* create() {
            return il2cpp::create_object<app::SteamPartyBeaconLocation_t>(get_class());
        }
        inline app::SteamPartyBeaconLocation_t__Boxed* box(app::SteamPartyBeaconLocation_t value) {
            return il2cpp::box_value<app::SteamPartyBeaconLocation_t__Boxed>(get_class(), value);
        }
        inline app::SteamPartyBeaconLocation_t__Array* create_array(int size) {
            return il2cpp::array_new<app::SteamPartyBeaconLocation_t__Array>(get_class(), size);
        }
        inline app::SteamPartyBeaconLocation_t__Array* create_array(const std::vector<app::SteamPartyBeaconLocation_t>& items) {
            return il2cpp::array_new<app::SteamPartyBeaconLocation_t__Array>(get_class(), items);
        }
    } // namespace SteamPartyBeaconLocation_t
} // namespace app::classes::types
