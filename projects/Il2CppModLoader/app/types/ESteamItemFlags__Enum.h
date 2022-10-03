#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ESteamItemFlags__Enum {
        namespace {
            app::ESteamItemFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::ESteamItemFlags__Enum__Class** type_info = &type_info_ref;
        inline app::ESteamItemFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamItemFlags__Enum__Class>(type_info, "Steamworks", "ESteamItemFlags");
        }
        inline app::ESteamItemFlags__Enum* create() {
            return il2cpp::create_object<app::ESteamItemFlags__Enum>(get_class());
        }
    } // namespace ESteamItemFlags__Enum
} // namespace app::classes::types
