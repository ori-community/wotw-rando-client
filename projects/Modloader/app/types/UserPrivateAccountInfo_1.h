#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UserPrivateAccountInfo_1__Class.h>
#include <Modloader/app/structs/UserPrivateAccountInfo_1.h>

namespace app::classes::types {
    namespace UserPrivateAccountInfo_1 {
        namespace {
            inline app::UserPrivateAccountInfo_1__Class* type_info_ref = nullptr;
        }
        inline app::UserPrivateAccountInfo_1__Class** type_info = &type_info_ref;
        inline app::UserPrivateAccountInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserPrivateAccountInfo_1__Class>(type_info, "PlayFab.ServerModels", "UserPrivateAccountInfo");
        }
        inline app::UserPrivateAccountInfo_1* create() {
            return il2cpp::create_object<app::UserPrivateAccountInfo_1>(get_class());
        }
    } // namespace UserPrivateAccountInfo_1
} // namespace app::classes::types
