#pragma once
#include <Modloader/app/structs/UserFacebookInfo.h>
#include <Modloader/app/structs/UserFacebookInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserFacebookInfo {
        inline app::UserFacebookInfo__Class** type_info() {
            static app::UserFacebookInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserFacebookInfo__Class**)(modloader::win::memory::resolve_rva(0x0472B3D8));
            }
            return cache;
        }
        inline app::UserFacebookInfo__Class* get_class() {
            return il2cpp::get_class<app::UserFacebookInfo__Class>(type_info(), "PlayFab.ClientModels", "UserFacebookInfo");
        }
        inline app::UserFacebookInfo* create() {
            return il2cpp::create_object<app::UserFacebookInfo>(get_class());
        }
    } // namespace UserFacebookInfo
} // namespace app::classes::types
