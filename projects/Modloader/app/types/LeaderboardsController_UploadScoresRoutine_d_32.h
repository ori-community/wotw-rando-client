#pragma once
#include <Modloader/app/structs/LeaderboardsController_UploadScoresRoutine_d_32.h>
#include <Modloader/app/structs/LeaderboardsController_UploadScoresRoutine_d_32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardsController_UploadScoresRoutine_d_32 {
        inline app::LeaderboardsController_UploadScoresRoutine_d_32__Class** type_info() {
            static app::LeaderboardsController_UploadScoresRoutine_d_32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderboardsController_UploadScoresRoutine_d_32__Class**)(modloader::win::memory::resolve_rva(0x04790FC8));
            }
            return cache;
        }
        inline app::LeaderboardsController_UploadScoresRoutine_d_32__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardsController_UploadScoresRoutine_d_32__Class>(type_info(), "", "LeaderboardsController", "<UploadScoresRoutine>d__32");
        }
        inline app::LeaderboardsController_UploadScoresRoutine_d_32* create() {
            return il2cpp::create_object<app::LeaderboardsController_UploadScoresRoutine_d_32>(get_class());
        }
    } // namespace LeaderboardsController_UploadScoresRoutine_d_32
} // namespace app::classes::types
