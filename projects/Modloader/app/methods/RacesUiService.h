#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RacesUiService.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/RaceStateMachineContext.h>
#include <Modloader/app/structs/MessageProvider.h>

namespace app::classes::RacesUiService {
    IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_LockedByUi, (app::RacesUiService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724AF0, bool, get_HidingSeinUI, (app::RacesUiService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724B00, void, ctor, (app::RacesUiService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724BC0, void, Reset, (app::RacesUiService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724C80, app::MessageDescriptor, GetStartPedestalBottomHintMessage, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x00724DE0, void, EnablePedestalActiveHelpUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx, bool race_beaten))
    IL2CPP_REGISTER_METHOD(0x00725070, void, UpdateStartPedestalBottomHint, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x00725190, void, DisablePedestalHelpUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x007251A0, void, EnableEndPedestalUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x00725350, void, EnableFlythroughUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x00725190, void, DisableFlythroughUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x00725500, void, EnableRaceFinishedUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx, float elapsed_time, bool force_exit))
    IL2CPP_REGISTER_METHOD(0x00725BF0, void, EnableRaceTimeoutUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x00725E80, void, EnableRaceInterruptedUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x00726130, void, ShowOfflineMessage, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx, bool no_token))
    IL2CPP_REGISTER_METHOD(0x007262F0, app::MessageDescriptor, GetRaceLeaveDescriptor, (app::RacesUiService * this_ptr, app::MessageProvider* provider, float time))
    IL2CPP_REGISTER_METHOD(0x00726560, void, EnableRaceLeaveUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx, float time))
    IL2CPP_REGISTER_METHOD(0x00726820, void, UpdateRaceLeaveUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx, float time))
    IL2CPP_REGISTER_METHOD(0x00725190, void, DisableRaceLeaveUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x00725190, void, DisableTimeoutUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x00725190, void, DisableRaceFinishedUi, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x00726960, void, DisableTempCommon, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x00726A40, void, DisposeAllManagedUI, (app::RacesUiService * this_ptr, app::RaceStateMachineContext* ctx))
} // namespace app::classes::RacesUiService
