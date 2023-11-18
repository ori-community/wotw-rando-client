#pragma once
#include <Modloader/app/structs/GetPlayerCombinedInfoResult.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoResult {
        inline app::GetPlayerCombinedInfoResult__Class** type_info() {
            static app::GetPlayerCombinedInfoResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerCombinedInfoResult__Class**)(modloader::win::memory::resolve_rva(0x0475CE60));
            }
            return cache;
        }
        inline app::GetPlayerCombinedInfoResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerCombinedInfoResult");
        }
        inline app::GetPlayerCombinedInfoResult* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoResult>(get_class());
        }
    } // namespace GetPlayerCombinedInfoResult
} // namespace app::classes::types
