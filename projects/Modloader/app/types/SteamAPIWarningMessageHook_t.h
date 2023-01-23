#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t__Class.h>
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t.h>

namespace app::classes::types {
    namespace SteamAPIWarningMessageHook_t {
        namespace {
            inline app::SteamAPIWarningMessageHook_t__Class* type_info_ref = nullptr;
        }
        inline app::SteamAPIWarningMessageHook_t__Class** type_info = &type_info_ref;
        inline app::SteamAPIWarningMessageHook_t__Class* get_class() {
            return il2cpp::get_class<app::SteamAPIWarningMessageHook_t__Class>(type_info, "Steamworks", "SteamAPIWarningMessageHook_t");
        }
        inline app::SteamAPIWarningMessageHook_t* create() {
            return il2cpp::create_object<app::SteamAPIWarningMessageHook_t>(get_class());
        }
    } // namespace SteamAPIWarningMessageHook_t
} // namespace app::classes::types
