#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UserTwitchInfo__Class.h>
#include <Modloader/app/structs/UserTwitchInfo.h>

namespace app::classes::types {
    namespace UserTwitchInfo {
        inline app::UserTwitchInfo__Class** type_info = (app::UserTwitchInfo__Class**)(modloader::win::memory::resolve_rva(0x047076C0));
        inline app::UserTwitchInfo__Class* get_class() {
            return il2cpp::get_class<app::UserTwitchInfo__Class>(type_info, "PlayFab.ClientModels", "UserTwitchInfo");
        }
        inline app::UserTwitchInfo* create() {
            return il2cpp::create_object<app::UserTwitchInfo>(get_class());
        }
    } // namespace UserTwitchInfo
} // namespace app::classes::types
