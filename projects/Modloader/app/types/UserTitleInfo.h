#pragma once
#include <Modloader/app/structs/UserTitleInfo.h>
#include <Modloader/app/structs/UserTitleInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserTitleInfo {
        inline app::UserTitleInfo__Class** type_info() {
            static app::UserTitleInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserTitleInfo__Class**)(modloader::win::memory::resolve_rva(0x0470C630));
            }
            return cache;
        }
        inline app::UserTitleInfo__Class* get_class() {
            return il2cpp::get_class<app::UserTitleInfo__Class>(type_info(), "PlayFab.ClientModels", "UserTitleInfo");
        }
        inline app::UserTitleInfo* create() {
            return il2cpp::create_object<app::UserTitleInfo>(get_class());
        }
    } // namespace UserTitleInfo
} // namespace app::classes::types
