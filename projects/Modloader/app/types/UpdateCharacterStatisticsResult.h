#pragma once
#include <Modloader/app/structs/UpdateCharacterStatisticsResult.h>
#include <Modloader/app/structs/UpdateCharacterStatisticsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterStatisticsResult {
        inline app::UpdateCharacterStatisticsResult__Class** type_info() {
            static app::UpdateCharacterStatisticsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateCharacterStatisticsResult__Class**)(modloader::win::memory::resolve_rva(0x0470A9F0));
            }
            return cache;
        }
        inline app::UpdateCharacterStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterStatisticsResult__Class>(type_info(), "PlayFab.ClientModels", "UpdateCharacterStatisticsResult");
        }
        inline app::UpdateCharacterStatisticsResult* create() {
            return il2cpp::create_object<app::UpdateCharacterStatisticsResult>(get_class());
        }
    } // namespace UpdateCharacterStatisticsResult
} // namespace app::classes::types
