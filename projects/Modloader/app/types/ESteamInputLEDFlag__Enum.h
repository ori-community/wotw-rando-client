#pragma once
#include <Modloader/app/structs/ESteamInputLEDFlag__Enum.h>
#include <Modloader/app/structs/ESteamInputLEDFlag__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ESteamInputLEDFlag__Enum {
        inline app::ESteamInputLEDFlag__Enum__Class** type_info() {
            static app::ESteamInputLEDFlag__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ESteamInputLEDFlag__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ESteamInputLEDFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamInputLEDFlag__Enum__Class>(type_info(), "Steamworks", "ESteamInputLEDFlag");
        }
        inline app::ESteamInputLEDFlag__Enum* create() {
            return il2cpp::create_object<app::ESteamInputLEDFlag__Enum>(get_class());
        }
    } // namespace ESteamInputLEDFlag__Enum
} // namespace app::classes::types
