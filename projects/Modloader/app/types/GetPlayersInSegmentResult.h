#pragma once
#include <Modloader/app/structs/GetPlayersInSegmentResult.h>
#include <Modloader/app/structs/GetPlayersInSegmentResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayersInSegmentResult {
        inline app::GetPlayersInSegmentResult__Class** type_info() {
            static app::GetPlayersInSegmentResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayersInSegmentResult__Class**)(modloader::win::memory::resolve_rva(0x04792C08));
            }
            return cache;
        }
        inline app::GetPlayersInSegmentResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayersInSegmentResult__Class>(type_info(), "PlayFab.ServerModels", "GetPlayersInSegmentResult");
        }
        inline app::GetPlayersInSegmentResult* create() {
            return il2cpp::create_object<app::GetPlayersInSegmentResult>(get_class());
        }
    } // namespace GetPlayersInSegmentResult
} // namespace app::classes::types
