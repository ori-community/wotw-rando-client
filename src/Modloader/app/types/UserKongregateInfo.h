#pragma once
#include <Modloader/app/structs/UserKongregateInfo.h>
#include <Modloader/app/structs/UserKongregateInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserKongregateInfo {
        inline app::UserKongregateInfo__Class** type_info() {
            static app::UserKongregateInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserKongregateInfo__Class**)(modloader::win::memory::resolve_rva(0x04718140));
            }
            return cache;
        }
        inline app::UserKongregateInfo__Class* get_class() {
            return il2cpp::get_class<app::UserKongregateInfo__Class>(type_info(), "PlayFab.ClientModels", "UserKongregateInfo");
        }
        inline app::UserKongregateInfo* create() {
            return il2cpp::create_object<app::UserKongregateInfo>(get_class());
        }
    } // namespace UserKongregateInfo
} // namespace app::classes::types
