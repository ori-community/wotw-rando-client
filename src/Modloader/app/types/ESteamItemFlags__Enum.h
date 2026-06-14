#pragma once
#include <Modloader/app/structs/ESteamItemFlags__Enum.h>
#include <Modloader/app/structs/ESteamItemFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ESteamItemFlags__Enum {
        inline app::ESteamItemFlags__Enum__Class** type_info() {
            static app::ESteamItemFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ESteamItemFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ESteamItemFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamItemFlags__Enum__Class>(type_info(), "Steamworks", "ESteamItemFlags");
        }
        inline app::ESteamItemFlags__Enum* create() {
            return il2cpp::create_object<app::ESteamItemFlags__Enum>(get_class());
        }
    } // namespace ESteamItemFlags__Enum
} // namespace app::classes::types
