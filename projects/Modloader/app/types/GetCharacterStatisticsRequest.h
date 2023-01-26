#pragma once
#include <Modloader/app/structs/GetCharacterStatisticsRequest.h>
#include <Modloader/app/structs/GetCharacterStatisticsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCharacterStatisticsRequest {
        inline app::GetCharacterStatisticsRequest__Class** type_info() {
            static app::GetCharacterStatisticsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCharacterStatisticsRequest__Class**)(modloader::win::memory::resolve_rva(0x0472F988));
            }
            return cache;
        }
        inline app::GetCharacterStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterStatisticsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetCharacterStatisticsRequest");
        }
        inline app::GetCharacterStatisticsRequest* create() {
            return il2cpp::create_object<app::GetCharacterStatisticsRequest>(get_class());
        }
    } // namespace GetCharacterStatisticsRequest
} // namespace app::classes::types
