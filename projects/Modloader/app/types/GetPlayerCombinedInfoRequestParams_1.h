#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoRequestParams_1 {
        namespace {
            inline app::GetPlayerCombinedInfoRequestParams_1__Class* type_info_ref = nullptr;
        }
        inline app::GetPlayerCombinedInfoRequestParams_1__Class** type_info = &type_info_ref;
        inline app::GetPlayerCombinedInfoRequestParams_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoRequestParams_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerCombinedInfoRequestParams");
        }
        inline app::GetPlayerCombinedInfoRequestParams_1* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoRequestParams_1>(get_class());
        }
    } // namespace GetPlayerCombinedInfoRequestParams_1
} // namespace app::classes::types
