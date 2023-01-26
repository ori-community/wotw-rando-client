#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeltaTimeManager.h>
#include <Modloader/app/structs/DeltaTimeManager_ControllerType__Enum.h>
#include <Modloader/app/structs/DeltaTimeManager_DeltaTimeFrameHistory.h>
#include <Modloader/app/structs/DeltaTimeManager_DeltaTimeFrameHistory__Array.h>
#include <Modloader/app/structs/DeltaTimeManager_InsertionMode__Enum.h>
#include <Modloader/app/structs/List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_.h>
#include <Modloader/app/structs/PlayerLoopSystem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::usedStandaloneScripts::DeltaTimeManagers::DeltaTimeManager {
    IL2CPP_REGISTER_METHOD(0x03123160, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x03123200, void, InitializeController, (app::DeltaTimeManager * this_ptr, app::DeltaTimeManager_ControllerType__Enum type))
    IL2CPP_REGISTER_METHOD(0x006410F0, app::DeltaTimeManager_ControllerType__Enum, get_Controller, (app::DeltaTimeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03123880, void, set_Controller, (app::DeltaTimeManager * this_ptr, app::DeltaTimeManager_ControllerType__Enum value))
    IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_Enabled, (app::DeltaTimeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031238C0, void, set_Enabled, (app::DeltaTimeManager * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x03123930, void, Awake, (app::DeltaTimeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03123CC0, void, OnDestroy, (app::DeltaTimeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03123DA0, void, Reset, (app::DeltaTimeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03123EF0, void, Enable, (app::DeltaTimeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03123F30, void, Disable, (app::DeltaTimeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03123F60, void, BeforeTimeManagerCallback, ())
    IL2CPP_REGISTER_METHOD(0x031240B0, void, AfterTimeManagerCallback, ())
    IL2CPP_REGISTER_METHOD(0x03124200, void, InjectToPlayerLoop, (app::PlayerLoopSystem * loop))
    IL2CPP_REGISTER_METHOD(0x03124480, void, Insert, (app::List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_ * list, app::PlayerLoopSystem system, app::DeltaTimeManager_InsertionMode__Enum insertion_mode, app::String* insertion_point))
    IL2CPP_REGISTER_METHOD(0x03124640, app::DeltaTimeManager_DeltaTimeFrameHistory*, GetHistoricFrame, (app::DeltaTimeManager * this_ptr, int32_t frames_in_past))
    IL2CPP_REGISTER_METHOD(0x03124770, bool, GetHistoricFrameRange, (app::DeltaTimeManager * this_ptr, int32_t offset, int32_t frame_count, app::DeltaTimeManager_DeltaTimeFrameHistory__Array** out_array))
    IL2CPP_REGISTER_METHOD(0x03124A90, void, OnBeforeTimeManager, (app::DeltaTimeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03124D80, void, OnAfterTimeManager, (app::DeltaTimeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03124F30, void, ctor, (app::DeltaTimeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031250D0, void, cctor, ())
} // namespace app::classes::usedStandaloneScripts::DeltaTimeManagers::DeltaTimeManager
