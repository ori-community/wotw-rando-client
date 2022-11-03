#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ESteamControllerLEDFlag__Enum {
        namespace {
            inline app::ESteamControllerLEDFlag__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ESteamControllerLEDFlag__Enum__Class** type_info = &type_info_ref;
        inline app::ESteamControllerLEDFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamControllerLEDFlag__Enum__Class>(type_info, "Steamworks", "ESteamControllerLEDFlag");
        }
        inline app::ESteamControllerLEDFlag__Enum* create() {
            return il2cpp::create_object<app::ESteamControllerLEDFlag__Enum>(get_class());
        }
    } // namespace ESteamControllerLEDFlag__Enum
} // namespace app::classes::types
