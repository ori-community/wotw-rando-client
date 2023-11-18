#pragma once
#include <Modloader/app/structs/GetCharacterStatisticsResult_1.h>
#include <Modloader/app/structs/GetCharacterStatisticsResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCharacterStatisticsResult_1 {
        inline app::GetCharacterStatisticsResult_1__Class** type_info() {
            static app::GetCharacterStatisticsResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCharacterStatisticsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04791958));
            }
            return cache;
        }
        inline app::GetCharacterStatisticsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterStatisticsResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetCharacterStatisticsResult");
        }
        inline app::GetCharacterStatisticsResult_1* create() {
            return il2cpp::create_object<app::GetCharacterStatisticsResult_1>(get_class());
        }
    } // namespace GetCharacterStatisticsResult_1
} // namespace app::classes::types
