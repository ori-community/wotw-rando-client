#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ESteamDeviceFormFactor__Enum {
        namespace {
            app::ESteamDeviceFormFactor__Enum__Class* type_info_ref = nullptr;
        }
        app::ESteamDeviceFormFactor__Enum__Class** type_info = &type_info_ref;
        inline app::ESteamDeviceFormFactor__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamDeviceFormFactor__Enum__Class>(type_info, "Steamworks", "ESteamDeviceFormFactor");
        }
        inline app::ESteamDeviceFormFactor__Enum* create() {
            return il2cpp::create_object<app::ESteamDeviceFormFactor__Enum>(get_class());
        }
    } // namespace ESteamDeviceFormFactor__Enum
} // namespace app::classes::types
