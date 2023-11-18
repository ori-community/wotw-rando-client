#pragma once
#include <Modloader/app/structs/GetPlayerCombinedInfoRequestParams_1.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoRequestParams_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoRequestParams_1 {
        inline app::GetPlayerCombinedInfoRequestParams_1__Class** type_info() {
            static app::GetPlayerCombinedInfoRequestParams_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetPlayerCombinedInfoRequestParams_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetPlayerCombinedInfoRequestParams_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoRequestParams_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayerCombinedInfoRequestParams");
        }
        inline app::GetPlayerCombinedInfoRequestParams_1* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoRequestParams_1>(get_class());
        }
    } // namespace GetPlayerCombinedInfoRequestParams_1
} // namespace app::classes::types
