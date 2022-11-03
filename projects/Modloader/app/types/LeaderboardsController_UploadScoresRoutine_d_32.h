#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardsController_UploadScoresRoutine_d_32 {
        inline app::LeaderboardsController_UploadScoresRoutine_d_32__Class** type_info = (app::LeaderboardsController_UploadScoresRoutine_d_32__Class**)(modloader::win::memory::resolve_rva(0x04790FC8));
        inline app::LeaderboardsController_UploadScoresRoutine_d_32__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardsController_UploadScoresRoutine_d_32__Class>(type_info, "", "LeaderboardsController", "<UploadScoresRoutine>d__32");
        }
        inline app::LeaderboardsController_UploadScoresRoutine_d_32* create() {
            return il2cpp::create_object<app::LeaderboardsController_UploadScoresRoutine_d_32>(get_class());
        }
    } // namespace LeaderboardsController_UploadScoresRoutine_d_32
} // namespace app::classes::types
