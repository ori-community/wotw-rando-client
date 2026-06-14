#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/ITrialData.h>
#include <Modloader/app/structs/RaceStateMachineContext.h>
#include <Modloader/app/structs/RaceStateMachineContext_Waiter.h>
#include <Modloader/app/structs/RaceTimer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::RaceStateMachineContext {
    IL2CPP_REGISTER_METHOD(0x00719D50, app::String*, get_RaceName, app::RaceStateMachineContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00719DF0, app::RaceStateMachineContext_Waiter*, Wait, app::RaceStateMachineContext* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x00719F50, app::String__Array*, GetFilesAtPath, app::String* path)
    IL2CPP_REGISTER_METHOD(0x00719F60, void, UploadReplay, app::RaceStateMachineContext* this_ptr, app::RaceTimer* timer, app::ITrialData* data)
    IL2CPP_REGISTER_METHOD(0x0071A1F0, void, UploadOfflineRaceFiles, )
    IL2CPP_REGISTER_METHOD(0x0071A9A0, void, LockScenes, app::RaceStateMachineContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071AB70, void, UnlockScenes, app::RaceStateMachineContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071AD10, void, LogError, app::RaceStateMachineContext* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x0071ADB0, void, ReportAndClearTechnicalFailure, app::RaceStateMachineContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071AE80, void, SaveDevGhost, app::RaceStateMachineContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071B080, void, SelectDefaultReplays, app::RaceStateMachineContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071B200, app::DifficultyMode__Enum, get_CurrentDifficulty, app::RaceStateMachineContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071B380, void, ctor, app::RaceStateMachineContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::RaceStateMachineContext
