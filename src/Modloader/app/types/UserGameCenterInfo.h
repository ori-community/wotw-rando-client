#pragma once
#include <Modloader/app/structs/UserGameCenterInfo.h>
#include <Modloader/app/structs/UserGameCenterInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserGameCenterInfo {
        inline app::UserGameCenterInfo__Class** type_info() {
            static app::UserGameCenterInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserGameCenterInfo__Class**)(modloader::win::memory::resolve_rva(0x047621B0));
            }
            return cache;
        }
        inline app::UserGameCenterInfo__Class* get_class() {
            return il2cpp::get_class<app::UserGameCenterInfo__Class>(type_info(), "PlayFab.ClientModels", "UserGameCenterInfo");
        }
        inline app::UserGameCenterInfo* create() {
            return il2cpp::create_object<app::UserGameCenterInfo>(get_class());
        }
    } // namespace UserGameCenterInfo
} // namespace app::classes::types
