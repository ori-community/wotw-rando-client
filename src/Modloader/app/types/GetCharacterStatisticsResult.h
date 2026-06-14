#pragma once
#include <Modloader/app/structs/GetCharacterStatisticsResult.h>
#include <Modloader/app/structs/GetCharacterStatisticsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCharacterStatisticsResult {
        inline app::GetCharacterStatisticsResult__Class** type_info() {
            static app::GetCharacterStatisticsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCharacterStatisticsResult__Class**)(modloader::win::memory::resolve_rva(0x0471CB48));
            }
            return cache;
        }
        inline app::GetCharacterStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterStatisticsResult__Class>(type_info(), "PlayFab.ClientModels", "GetCharacterStatisticsResult");
        }
        inline app::GetCharacterStatisticsResult* create() {
            return il2cpp::create_object<app::GetCharacterStatisticsResult>(get_class());
        }
    } // namespace GetCharacterStatisticsResult
} // namespace app::classes::types
