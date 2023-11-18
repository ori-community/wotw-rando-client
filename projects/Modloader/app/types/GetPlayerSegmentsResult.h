#pragma once
#include <Modloader/app/structs/GetPlayerSegmentsResult.h>
#include <Modloader/app/structs/GetPlayerSegmentsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerSegmentsResult {
        inline app::GetPlayerSegmentsResult__Class** type_info() {
            static app::GetPlayerSegmentsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerSegmentsResult__Class**)(modloader::win::memory::resolve_rva(0x0470B910));
            }
            return cache;
        }
        inline app::GetPlayerSegmentsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerSegmentsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerSegmentsResult");
        }
        inline app::GetPlayerSegmentsResult* create() {
            return il2cpp::create_object<app::GetPlayerSegmentsResult>(get_class());
        }
    } // namespace GetPlayerSegmentsResult
} // namespace app::classes::types
