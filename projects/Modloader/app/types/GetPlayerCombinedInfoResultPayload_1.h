#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload_1__Class.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload_1.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoResultPayload_1 {
        namespace {
            inline app::GetPlayerCombinedInfoResultPayload_1__Class* type_info_ref = nullptr;
        }
        inline app::GetPlayerCombinedInfoResultPayload_1__Class** type_info = &type_info_ref;
        inline app::GetPlayerCombinedInfoResultPayload_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoResultPayload_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerCombinedInfoResultPayload");
        }
        inline app::GetPlayerCombinedInfoResultPayload_1* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoResultPayload_1>(get_class());
        }
    } // namespace GetPlayerCombinedInfoResultPayload_1
} // namespace app::classes::types
