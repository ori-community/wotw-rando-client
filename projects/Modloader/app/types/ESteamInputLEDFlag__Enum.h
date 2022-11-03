#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ESteamInputLEDFlag__Enum {
        namespace {
            inline app::ESteamInputLEDFlag__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ESteamInputLEDFlag__Enum__Class** type_info = &type_info_ref;
        inline app::ESteamInputLEDFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamInputLEDFlag__Enum__Class>(type_info, "Steamworks", "ESteamInputLEDFlag");
        }
        inline app::ESteamInputLEDFlag__Enum* create() {
            return il2cpp::create_object<app::ESteamInputLEDFlag__Enum>(get_class());
        }
    } // namespace ESteamInputLEDFlag__Enum
} // namespace app::classes::types
