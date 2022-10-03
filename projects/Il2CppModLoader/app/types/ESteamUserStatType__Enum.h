#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ESteamUserStatType__Enum {
        namespace {
            app::ESteamUserStatType__Enum__Class* type_info_ref = nullptr;
        }
        app::ESteamUserStatType__Enum__Class** type_info = &type_info_ref;
        inline app::ESteamUserStatType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamUserStatType__Enum__Class>(type_info, "Steamworks", "ESteamUserStatType");
        }
        inline app::ESteamUserStatType__Enum* create() {
            return il2cpp::create_object<app::ESteamUserStatType__Enum>(get_class());
        }
    } // namespace ESteamUserStatType__Enum
} // namespace app::classes::types
