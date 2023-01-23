#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayerStatisticVersionsResult__Class.h>
#include <Modloader/app/structs/GetPlayerStatisticVersionsResult.h>

namespace app::classes::types {
    namespace GetPlayerStatisticVersionsResult {
        inline app::GetPlayerStatisticVersionsResult__Class** type_info = (app::GetPlayerStatisticVersionsResult__Class**)(modloader::win::memory::resolve_rva(0x0476A090));
        inline app::GetPlayerStatisticVersionsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticVersionsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayerStatisticVersionsResult");
        }
        inline app::GetPlayerStatisticVersionsResult* create() {
            return il2cpp::create_object<app::GetPlayerStatisticVersionsResult>(get_class());
        }
    } // namespace GetPlayerStatisticVersionsResult
} // namespace app::classes::types
