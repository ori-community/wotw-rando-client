#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EChatSteamIDInstanceFlags__Enum {
        namespace {
            inline app::EChatSteamIDInstanceFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EChatSteamIDInstanceFlags__Enum__Class** type_info = &type_info_ref;
        inline app::EChatSteamIDInstanceFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChatSteamIDInstanceFlags__Enum__Class>(type_info, "Steamworks", "EChatSteamIDInstanceFlags");
        }
        inline app::EChatSteamIDInstanceFlags__Enum* create() {
            return il2cpp::create_object<app::EChatSteamIDInstanceFlags__Enum>(get_class());
        }
    } // namespace EChatSteamIDInstanceFlags__Enum
} // namespace app::classes::types
