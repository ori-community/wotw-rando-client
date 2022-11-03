#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserGameCenterInfo {
        inline app::UserGameCenterInfo__Class** type_info = (app::UserGameCenterInfo__Class**)(modloader::win::memory::resolve_rva(0x047621B0));
        inline app::UserGameCenterInfo__Class* get_class() {
            return il2cpp::get_class<app::UserGameCenterInfo__Class>(type_info, "PlayFab.ClientModels", "UserGameCenterInfo");
        }
        inline app::UserGameCenterInfo* create() {
            return il2cpp::create_object<app::UserGameCenterInfo>(get_class());
        }
    } // namespace UserGameCenterInfo
} // namespace app::classes::types
