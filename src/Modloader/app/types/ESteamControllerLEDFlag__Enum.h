#pragma once
#include <Modloader/app/structs/ESteamControllerLEDFlag__Enum.h>
#include <Modloader/app/structs/ESteamControllerLEDFlag__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ESteamControllerLEDFlag__Enum {
        inline app::ESteamControllerLEDFlag__Enum__Class** type_info() {
            static app::ESteamControllerLEDFlag__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ESteamControllerLEDFlag__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ESteamControllerLEDFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamControllerLEDFlag__Enum__Class>(type_info(), "Steamworks", "ESteamControllerLEDFlag");
        }
        inline app::ESteamControllerLEDFlag__Enum* create() {
            return il2cpp::create_object<app::ESteamControllerLEDFlag__Enum>(get_class());
        }
    } // namespace ESteamControllerLEDFlag__Enum
} // namespace app::classes::types
