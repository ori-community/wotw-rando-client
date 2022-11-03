#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetCharacterStatisticsRequest_1 {
        inline app::GetCharacterStatisticsRequest_1__Class** type_info = (app::GetCharacterStatisticsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04732AD0));
        inline app::GetCharacterStatisticsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterStatisticsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetCharacterStatisticsRequest");
        }
        inline app::GetCharacterStatisticsRequest_1* create() {
            return il2cpp::create_object<app::GetCharacterStatisticsRequest_1>(get_class());
        }
    } // namespace GetCharacterStatisticsRequest_1
} // namespace app::classes::types
