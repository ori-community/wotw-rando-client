#pragma once
#include <Modloader/app/structs/UserPrivateAccountInfo.h>
#include <Modloader/app/structs/UserPrivateAccountInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserPrivateAccountInfo {
        inline app::UserPrivateAccountInfo__Class** type_info() {
            static app::UserPrivateAccountInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserPrivateAccountInfo__Class**)(modloader::win::memory::resolve_rva(0x04712658));
            }
            return cache;
        }
        inline app::UserPrivateAccountInfo__Class* get_class() {
            return il2cpp::get_class<app::UserPrivateAccountInfo__Class>(type_info(), "PlayFab.ClientModels", "UserPrivateAccountInfo");
        }
        inline app::UserPrivateAccountInfo* create() {
            return il2cpp::create_object<app::UserPrivateAccountInfo>(get_class());
        }
    } // namespace UserPrivateAccountInfo
} // namespace app::classes::types
