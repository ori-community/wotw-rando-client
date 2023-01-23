#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Class.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Boxed.h>

namespace app::classes::types {
    namespace PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13 {
        namespace {
            inline app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Class** type_info = &type_info_ref;
        inline app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Class>(type_info, "SystemIntegration.Races", "PlayFabRaceServiceProvider", "<ProcessLeaderBoardList>d__13");
        }
        inline app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13* create() {
            return il2cpp::create_object<app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13>(get_class());
        }
        inline app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Boxed* box(app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13 value) {
            return il2cpp::box_value<app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Boxed>(get_class(), value);
        }
    } // namespace PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13
} // namespace app::classes::types
