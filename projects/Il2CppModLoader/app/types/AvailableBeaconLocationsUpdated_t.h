#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AvailableBeaconLocationsUpdated_t {
        namespace {
            inline app::AvailableBeaconLocationsUpdated_t__Class* type_info_ref = nullptr;
        }
        inline app::AvailableBeaconLocationsUpdated_t__Class** type_info = &type_info_ref;
        inline app::AvailableBeaconLocationsUpdated_t__Class* get_class() {
            return il2cpp::get_class<app::AvailableBeaconLocationsUpdated_t__Class>(type_info, "Steamworks", "AvailableBeaconLocationsUpdated_t");
        }
        inline app::AvailableBeaconLocationsUpdated_t* create() {
            return il2cpp::create_object<app::AvailableBeaconLocationsUpdated_t>(get_class());
        }
        inline app::AvailableBeaconLocationsUpdated_t__Boxed* box(app::AvailableBeaconLocationsUpdated_t value) {
            return il2cpp::box_value<app::AvailableBeaconLocationsUpdated_t__Boxed>(get_class(), value);
        }
    } // namespace AvailableBeaconLocationsUpdated_t
} // namespace app::classes::types
