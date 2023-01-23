#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/LoremasterReplayController.h>
#include <Modloader/app/structs/ReplaySetting.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LoremasterReplayController {
    IL2CPP_REGISTER_METHOD(0x009ED850, bool, get_LoreMasterReplayActive, ())
    IL2CPP_REGISTER_METHOD(0x009ED940, bool, get_PlayingMasterTimeline, ())
    IL2CPP_REGISTER_METHOD(0x009EDA40, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x009EDAD0, void, ResetState, ())
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EDC60, bool, ReplayActive, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EDCB0, bool, AllowFallOutOfWorld, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanRestart, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EDCC0, bool, get_WaitingToExit, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EDCD0, bool, get_WaitingToApply, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EDCE0, bool, ReplayMode, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EDD00, void, OnEnable, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EDDB0, void, OnDisable, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EDE50, void, ApplySetting, (app::ReplaySetting * setting))
    IL2CPP_REGISTER_METHOD(0x009EE000, void, OnAppliedSettings, (app::ReplaySetting * setting))
    IL2CPP_REGISTER_METHOD(0x009EE8C0, void, MasterTimelineFinished, ())
    IL2CPP_REGISTER_METHODINFO(0x0471F4B0, LoremasterReplayController_MasterTimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009EEA00, void, OnRevertedSettings, (app::ReplaySetting * setting))
    IL2CPP_REGISTER_METHOD(0x009EECA0, void, ExitToMenu, ())
    IL2CPP_REGISTER_METHODINFO(0x04794120, LoremasterReplayController_ExitToMenu__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009EEF50, void, LoadOnGameReset, ())
    IL2CPP_REGISTER_METHODINFO(0x047988B0, LoremasterReplayController_LoadOnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009EF480, void, LoadGame, ())
    IL2CPP_REGISTER_METHODINFO(0x0476F6D8, LoremasterReplayController_LoadGame__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009EF760, void, ExitReplay, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EF960, void, RestartReplay, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EFA10, void, ResetData, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EFA30, void, RevertState, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EFB00, void, ApplyState, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EFE80, void, ApplyCharacters, (app::LoremasterReplayController * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x009F0520, void, OnAfterTandemSpawn, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743320, LoremasterReplayController_OnAfterTandemSpawn__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009F0980, void, Exit, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475CBB0, LoremasterReplayController_Exit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009F0B60, void, Enter, (app::LoremasterReplayController * this_ptr, bool should_cache_uberstates))
    IL2CPP_REGISTER_METHOD(0x009F0DC0, bool, get_FadedIn, (app::LoremasterReplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F0EC0, void, OnFixedUpdate, (app::LoremasterReplayController * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x009F18E0, void, ctor, (app::LoremasterReplayController * this_ptr))
} // namespace app::classes::LoremasterReplayController
