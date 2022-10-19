#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ESteamControllerPad__Enum {
        namespace {
            inline app::ESteamControllerPad__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ESteamControllerPad__Enum__Class** type_info = &type_info_ref;
        inline app::ESteamControllerPad__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESteamControllerPad__Enum__Class>(type_info, "Steamworks", "ESteamControllerPad");
        }
        inline app::ESteamControllerPad__Enum* create() {
            return il2cpp::create_object<app::ESteamControllerPad__Enum>(get_class());
        }
    } // namespace ESteamControllerPad__Enum
} // namespace app::classes::types
