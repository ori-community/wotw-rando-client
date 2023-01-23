#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ESteamItemFlags__Enum__Class.h>
#include <Modloader/app/structs/ESteamItemFlags__Enum.h>

namespace app::classes::types {
    namespace ESteamItemFlags__Enum {
        namespace {
            inline app::ESteamItemFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ESteamItemFlags__Enum__Class** type_info = &type_info_ref;
        inline app::ESteamItemFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamItemFlags__Enum__Class>(type_info, "Steamworks", "ESteamItemFlags");
        }
        inline app::ESteamItemFlags__Enum* create() {
            return il2cpp::create_object<app::ESteamItemFlags__Enum>(get_class());
        }
    } // namespace ESteamItemFlags__Enum
} // namespace app::classes::types
