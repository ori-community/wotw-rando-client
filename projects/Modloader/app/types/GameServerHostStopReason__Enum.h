#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameServerHostStopReason__Enum__Class.h>
#include <Modloader/app/structs/GameServerHostStopReason__Enum.h>

namespace app::classes::types {
    namespace GameServerHostStopReason__Enum {
        namespace {
            inline app::GameServerHostStopReason__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GameServerHostStopReason__Enum__Class** type_info = &type_info_ref;
        inline app::GameServerHostStopReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::GameServerHostStopReason__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "GameServerHostStopReason");
        }
        inline app::GameServerHostStopReason__Enum* create() {
            return il2cpp::create_object<app::GameServerHostStopReason__Enum>(get_class());
        }
    } // namespace GameServerHostStopReason__Enum
} // namespace app::classes::types
