#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UserGameCenterInfo_1__Class.h>
#include <Modloader/app/structs/UserGameCenterInfo_1.h>

namespace app::classes::types {
    namespace UserGameCenterInfo_1 {
        namespace {
            inline app::UserGameCenterInfo_1__Class* type_info_ref = nullptr;
        }
        inline app::UserGameCenterInfo_1__Class** type_info = &type_info_ref;
        inline app::UserGameCenterInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserGameCenterInfo_1__Class>(type_info, "PlayFab.ServerModels", "UserGameCenterInfo");
        }
        inline app::UserGameCenterInfo_1* create() {
            return il2cpp::create_object<app::UserGameCenterInfo_1>(get_class());
        }
    } // namespace UserGameCenterInfo_1
} // namespace app::classes::types
