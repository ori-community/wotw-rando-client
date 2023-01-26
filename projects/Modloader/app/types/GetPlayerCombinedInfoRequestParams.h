#pragma once
#include <Modloader/app/structs/GetPlayerCombinedInfoRequestParams.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoRequestParams__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoRequestParams {
        inline app::GetPlayerCombinedInfoRequestParams__Class** type_info() {
            static app::GetPlayerCombinedInfoRequestParams__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerCombinedInfoRequestParams__Class**)(modloader::win::memory::resolve_rva(0x04783840));
            }
            return cache;
        }
        inline app::GetPlayerCombinedInfoRequestParams__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoRequestParams__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerCombinedInfoRequestParams");
        }
        inline app::GetPlayerCombinedInfoRequestParams* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoRequestParams>(get_class());
        }
    } // namespace GetPlayerCombinedInfoRequestParams
} // namespace app::classes::types
