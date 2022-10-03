#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TeleportBeacon {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TeleportBeacon__Class** type_info;
        inline app::TeleportBeacon__Class* get_class() {
            return il2cpp::get_class<app::TeleportBeacon__Class>(type_info, "", "TeleportBeacon");
        }
        inline app::TeleportBeacon* create() {
            return il2cpp::create_object<app::TeleportBeacon>(get_class());
        }
    } // namespace TeleportBeacon
} // namespace app::classes::types
