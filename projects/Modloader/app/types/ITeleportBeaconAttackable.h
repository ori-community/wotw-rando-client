#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITeleportBeaconAttackable__Class.h>

namespace app::classes::types {
    namespace ITeleportBeaconAttackable {
        inline app::ITeleportBeaconAttackable__Class** type_info = (app::ITeleportBeaconAttackable__Class**)(modloader::win::memory::resolve_rva(0x0470C498));
        inline app::ITeleportBeaconAttackable__Class* get_class() {
            return il2cpp::get_class<app::ITeleportBeaconAttackable__Class>(type_info, "", "ITeleportBeaconAttackable");
        }
    } // namespace ITeleportBeaconAttackable
} // namespace app::classes::types
