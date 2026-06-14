#pragma once
#include <Modloader/app/structs/UserAccountInfo.h>
#include <Modloader/app/structs/UserAccountInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserAccountInfo {
        inline app::UserAccountInfo__Class** type_info() {
            static app::UserAccountInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserAccountInfo__Class**)(modloader::win::memory::resolve_rva(0x047144F8));
            }
            return cache;
        }
        inline app::UserAccountInfo__Class* get_class() {
            return il2cpp::get_class<app::UserAccountInfo__Class>(type_info(), "PlayFab.ClientModels", "UserAccountInfo");
        }
        inline app::UserAccountInfo* create() {
            return il2cpp::create_object<app::UserAccountInfo>(get_class());
        }
    } // namespace UserAccountInfo
} // namespace app::classes::types
