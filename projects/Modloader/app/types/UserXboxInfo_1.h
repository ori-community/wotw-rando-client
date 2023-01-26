#pragma once
#include <Modloader/app/structs/UserXboxInfo_1.h>
#include <Modloader/app/structs/UserXboxInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserXboxInfo_1 {
        inline app::UserXboxInfo_1__Class** type_info() {
            static app::UserXboxInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserXboxInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserXboxInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserXboxInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserXboxInfo");
        }
        inline app::UserXboxInfo_1* create() {
            return il2cpp::create_object<app::UserXboxInfo_1>(get_class());
        }
    } // namespace UserXboxInfo_1
} // namespace app::classes::types
