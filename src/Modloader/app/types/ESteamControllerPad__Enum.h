#pragma once
#include <Modloader/app/structs/ESteamControllerPad__Enum.h>
#include <Modloader/app/structs/ESteamControllerPad__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ESteamControllerPad__Enum {
        inline app::ESteamControllerPad__Enum__Class** type_info() {
            static app::ESteamControllerPad__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ESteamControllerPad__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ESteamControllerPad__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamControllerPad__Enum__Class>(type_info(), "Steamworks", "ESteamControllerPad");
        }
        inline app::ESteamControllerPad__Enum* create() {
            return il2cpp::create_object<app::ESteamControllerPad__Enum>(get_class());
        }
    } // namespace ESteamControllerPad__Enum
} // namespace app::classes::types
