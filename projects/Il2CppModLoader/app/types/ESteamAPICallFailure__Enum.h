#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ESteamAPICallFailure__Enum {
        namespace {
            app::ESteamAPICallFailure__Enum__Class* type_info_ref = nullptr;
        }
        app::ESteamAPICallFailure__Enum__Class** type_info = &type_info_ref;
        inline app::ESteamAPICallFailure__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamAPICallFailure__Enum__Class>(type_info, "Steamworks", "ESteamAPICallFailure");
        }
        inline app::ESteamAPICallFailure__Enum* create() {
            return il2cpp::create_object<app::ESteamAPICallFailure__Enum>(get_class());
        }
    } // namespace ESteamAPICallFailure__Enum
} // namespace app::classes::types
