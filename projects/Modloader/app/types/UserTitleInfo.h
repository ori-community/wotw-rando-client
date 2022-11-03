#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserTitleInfo {
        inline app::UserTitleInfo__Class** type_info = (app::UserTitleInfo__Class**)(modloader::win::memory::resolve_rva(0x0470C630));
        inline app::UserTitleInfo__Class* get_class() {
            return il2cpp::get_class<app::UserTitleInfo__Class>(type_info, "PlayFab.ClientModels", "UserTitleInfo");
        }
        inline app::UserTitleInfo* create() {
            return il2cpp::create_object<app::UserTitleInfo>(get_class());
        }
    } // namespace UserTitleInfo
} // namespace app::classes::types
