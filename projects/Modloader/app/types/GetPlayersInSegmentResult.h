#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayersInSegmentResult__Class.h>
#include <Modloader/app/structs/GetPlayersInSegmentResult.h>

namespace app::classes::types {
    namespace GetPlayersInSegmentResult {
        inline app::GetPlayersInSegmentResult__Class** type_info = (app::GetPlayersInSegmentResult__Class**)(modloader::win::memory::resolve_rva(0x04792C08));
        inline app::GetPlayersInSegmentResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayersInSegmentResult__Class>(type_info, "PlayFab.ServerModels", "GetPlayersInSegmentResult");
        }
        inline app::GetPlayersInSegmentResult* create() {
            return il2cpp::create_object<app::GetPlayersInSegmentResult>(get_class());
        }
    } // namespace GetPlayersInSegmentResult
} // namespace app::classes::types
