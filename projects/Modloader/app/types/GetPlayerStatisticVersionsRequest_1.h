#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest_1__Class.h>
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest_1.h>

namespace app::classes::types {
    namespace GetPlayerStatisticVersionsRequest_1 {
        inline app::GetPlayerStatisticVersionsRequest_1__Class** type_info = (app::GetPlayerStatisticVersionsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04739CB8));
        inline app::GetPlayerStatisticVersionsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticVersionsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerStatisticVersionsRequest");
        }
        inline app::GetPlayerStatisticVersionsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayerStatisticVersionsRequest_1>(get_class());
        }
    } // namespace GetPlayerStatisticVersionsRequest_1
} // namespace app::classes::types
