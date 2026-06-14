#pragma once
#include <Modloader/app/structs/GameServerHostStopReason__Enum.h>
#include <Modloader/app/structs/GameServerHostStopReason__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameServerHostStopReason__Enum {
        inline app::GameServerHostStopReason__Enum__Class** type_info() {
            static app::GameServerHostStopReason__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameServerHostStopReason__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameServerHostStopReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::GameServerHostStopReason__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "GameServerHostStopReason");
        }
        inline app::GameServerHostStopReason__Enum* create() {
            return il2cpp::create_object<app::GameServerHostStopReason__Enum>(get_class());
        }
    } // namespace GameServerHostStopReason__Enum
} // namespace app::classes::types
