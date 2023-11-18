#pragma once
#include <Modloader/app/structs/GetPlayerStatisticVersionsResult.h>
#include <Modloader/app/structs/GetPlayerStatisticVersionsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticVersionsResult {
        inline app::GetPlayerStatisticVersionsResult__Class** type_info() {
            static app::GetPlayerStatisticVersionsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerStatisticVersionsResult__Class**)(modloader::win::memory::resolve_rva(0x0476A090));
            }
            return cache;
        }
        inline app::GetPlayerStatisticVersionsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticVersionsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerStatisticVersionsResult");
        }
        inline app::GetPlayerStatisticVersionsResult* create() {
            return il2cpp::create_object<app::GetPlayerStatisticVersionsResult>(get_class());
        }
    } // namespace GetPlayerStatisticVersionsResult
} // namespace app::classes::types
