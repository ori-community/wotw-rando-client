#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAreaMapInformation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateAreaMapInformation__Class** type_info;
        inline app::PlayerUberStateAreaMapInformation__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateAreaMapInformation__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAreaMapInformation");
        }
        inline app::PlayerUberStateAreaMapInformation* create() {
            return il2cpp::create_object<app::PlayerUberStateAreaMapInformation>(get_class());
        }
    } // namespace PlayerUberStateAreaMapInformation
} // namespace app::classes::types
