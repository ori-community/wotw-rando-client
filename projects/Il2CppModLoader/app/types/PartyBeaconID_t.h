#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PartyBeaconID_t {
        inline app::PartyBeaconID_t__Class** type_info = (app::PartyBeaconID_t__Class**)(modloader::win::memory::resolve_rva(0x04761B50));
        inline app::PartyBeaconID_t__Class* get_class() {
            return il2cpp::get_class<app::PartyBeaconID_t__Class>(type_info, "Steamworks", "PartyBeaconID_t");
        }
        inline app::PartyBeaconID_t* create() {
            return il2cpp::create_object<app::PartyBeaconID_t>(get_class());
        }
        inline app::PartyBeaconID_t__Boxed* box(app::PartyBeaconID_t value) {
            return il2cpp::box_value<app::PartyBeaconID_t__Boxed>(get_class(), value);
        }
    } // namespace PartyBeaconID_t
} // namespace app::classes::types
