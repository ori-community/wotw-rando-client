#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SteamAPI_CheckCallbackRegistered_t__Class.h>
#include <Modloader/app/structs/SteamAPI_CheckCallbackRegistered_t.h>

namespace app::classes::types {
    namespace SteamAPI_CheckCallbackRegistered_t {
        namespace {
            inline app::SteamAPI_CheckCallbackRegistered_t__Class* type_info_ref = nullptr;
        }
        inline app::SteamAPI_CheckCallbackRegistered_t__Class** type_info = &type_info_ref;
        inline app::SteamAPI_CheckCallbackRegistered_t__Class* get_class() {
            return il2cpp::get_class<app::SteamAPI_CheckCallbackRegistered_t__Class>(type_info, "Steamworks", "SteamAPI_CheckCallbackRegistered_t");
        }
        inline app::SteamAPI_CheckCallbackRegistered_t* create() {
            return il2cpp::create_object<app::SteamAPI_CheckCallbackRegistered_t>(get_class());
        }
    } // namespace SteamAPI_CheckCallbackRegistered_t
} // namespace app::classes::types
