#pragma once
#include <Modloader/app/structs/PartyBeaconID_t.h>
#include <Modloader/app/structs/PartyBeaconID_t__Boxed.h>
#include <Modloader/app/structs/PartyBeaconID_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PartyBeaconID_t {
        inline app::PartyBeaconID_t__Class** type_info() {
            static app::PartyBeaconID_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PartyBeaconID_t__Class**)(modloader::win::memory::resolve_rva(0x04761B50));
            }
            return cache;
        }
        inline app::PartyBeaconID_t__Class* get_class() {
            return il2cpp::get_class<app::PartyBeaconID_t__Class>(type_info(), "Steamworks", "PartyBeaconID_t");
        }
        inline app::PartyBeaconID_t* create() {
            return il2cpp::create_object<app::PartyBeaconID_t>(get_class());
        }
        inline app::PartyBeaconID_t__Boxed* box(app::PartyBeaconID_t value) {
            return il2cpp::box_value<app::PartyBeaconID_t__Boxed>(get_class(), value);
        }
    } // namespace PartyBeaconID_t
} // namespace app::classes::types
