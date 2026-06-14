#pragma once
#include <Modloader/app/structs/ITeleportBeaconAttackable.h>
#include <Modloader/app/structs/ITeleportBeaconAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITeleportBeaconAttackable {
        inline app::ITeleportBeaconAttackable__Class** type_info() {
            static app::ITeleportBeaconAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITeleportBeaconAttackable__Class**)(modloader::win::memory::resolve_rva(0x0470C498));
            }
            return cache;
        }
        inline app::ITeleportBeaconAttackable__Class* get_class() {
            return il2cpp::get_class<app::ITeleportBeaconAttackable__Class>(type_info(), "", "ITeleportBeaconAttackable");
        }
    } // namespace ITeleportBeaconAttackable
} // namespace app::classes::types
