#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameplayToCinematicEntity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::GameplayToCinematicEntity {
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_Time, (app::GameplayToCinematicEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076E700, void, Awake, (app::GameplayToCinematicEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076E8A0, void, OnDestroy, (app::GameplayToCinematicEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076EA40, void, OnGameReset, (app::GameplayToCinematicEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076EB10, void, OnStartPlayback, (app::GameplayToCinematicEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0076EC30, void, SetupStartingValues, (app::GameplayToCinematicEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076ED20, void, OnStopPlayback, (app::GameplayToCinematicEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076ED30, void, OnUpdateEntity, (app::GameplayToCinematicEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0076F150, void, RestoreToOriginalState, (app::GameplayToCinematicEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076F300, void, SynchronizeData, (app::GameplayToCinematicEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x0076F390, void, ctor, (app::GameplayToCinematicEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::GameplayToCinematicEntity
