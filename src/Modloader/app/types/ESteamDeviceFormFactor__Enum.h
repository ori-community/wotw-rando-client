#pragma once
#include <Modloader/app/structs/ESteamDeviceFormFactor__Enum.h>
#include <Modloader/app/structs/ESteamDeviceFormFactor__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ESteamDeviceFormFactor__Enum {
        inline app::ESteamDeviceFormFactor__Enum__Class** type_info() {
            static app::ESteamDeviceFormFactor__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ESteamDeviceFormFactor__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ESteamDeviceFormFactor__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamDeviceFormFactor__Enum__Class>(type_info(), "Steamworks", "ESteamDeviceFormFactor");
        }
        inline app::ESteamDeviceFormFactor__Enum* create() {
            return il2cpp::create_object<app::ESteamDeviceFormFactor__Enum>(get_class());
        }
    } // namespace ESteamDeviceFormFactor__Enum
} // namespace app::classes::types
