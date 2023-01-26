#pragma once
#include <Modloader/app/structs/EChatSteamIDInstanceFlags__Enum.h>
#include <Modloader/app/structs/EChatSteamIDInstanceFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EChatSteamIDInstanceFlags__Enum {
        inline app::EChatSteamIDInstanceFlags__Enum__Class** type_info() {
            static app::EChatSteamIDInstanceFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EChatSteamIDInstanceFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EChatSteamIDInstanceFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChatSteamIDInstanceFlags__Enum__Class>(type_info(), "Steamworks", "EChatSteamIDInstanceFlags");
        }
        inline app::EChatSteamIDInstanceFlags__Enum* create() {
            return il2cpp::create_object<app::EChatSteamIDInstanceFlags__Enum>(get_class());
        }
    } // namespace EChatSteamIDInstanceFlags__Enum
} // namespace app::classes::types
