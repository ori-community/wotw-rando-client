#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITeleportBeaconAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITeleportBeaconAttackable__Class** type_info;
        inline app::ITeleportBeaconAttackable__Class* get_class() {
            return il2cpp::get_class<app::ITeleportBeaconAttackable__Class>(type_info, "", "ITeleportBeaconAttackable");
        }
    } // namespace ITeleportBeaconAttackable
} // namespace app::classes::types
