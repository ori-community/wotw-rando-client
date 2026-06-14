#pragma once
#include <Modloader/app/structs/ESteamInputType__Enum.h>
#include <Modloader/app/structs/ESteamInputType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ESteamInputType__Enum {
        inline app::ESteamInputType__Enum__Class** type_info() {
            static app::ESteamInputType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ESteamInputType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ESteamInputType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamInputType__Enum__Class>(type_info(), "Steamworks", "ESteamInputType");
        }
        inline app::ESteamInputType__Enum* create() {
            return il2cpp::create_object<app::ESteamInputType__Enum>(get_class());
        }
    } // namespace ESteamInputType__Enum
} // namespace app::classes::types
