#pragma once
#include <Modloader/app/structs/UserWindowsHelloInfo_1.h>
#include <Modloader/app/structs/UserWindowsHelloInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserWindowsHelloInfo_1 {
        inline app::UserWindowsHelloInfo_1__Class** type_info() {
            static app::UserWindowsHelloInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserWindowsHelloInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserWindowsHelloInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserWindowsHelloInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserWindowsHelloInfo");
        }
        inline app::UserWindowsHelloInfo_1* create() {
            return il2cpp::create_object<app::UserWindowsHelloInfo_1>(get_class());
        }
    } // namespace UserWindowsHelloInfo_1
} // namespace app::classes::types
