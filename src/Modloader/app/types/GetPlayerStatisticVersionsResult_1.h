#pragma once
#include <Modloader/app/structs/GetPlayerStatisticVersionsResult_1.h>
#include <Modloader/app/structs/GetPlayerStatisticVersionsResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticVersionsResult_1 {
        inline app::GetPlayerStatisticVersionsResult_1__Class** type_info() {
            static app::GetPlayerStatisticVersionsResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerStatisticVersionsResult_1__Class**)(modloader::win::memory::resolve_rva(0x0471E930));
            }
            return cache;
        }
        inline app::GetPlayerStatisticVersionsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticVersionsResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayerStatisticVersionsResult");
        }
        inline app::GetPlayerStatisticVersionsResult_1* create() {
            return il2cpp::create_object<app::GetPlayerStatisticVersionsResult_1>(get_class());
        }
    } // namespace GetPlayerStatisticVersionsResult_1
} // namespace app::classes::types
