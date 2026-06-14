#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ScenesManagerPrediction.h>
#include <Modloader/app/structs/ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed.h>
#include <Modloader/app/structs/ScenesManagerPrediction_UpdatePositionType__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::ScenesManagerPrediction_UpdateExtrapolatedPositionTask {
    IL2CPP_REGISTER_METHOD(
        0x00124170,
        void,
        ctor,
        app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed* this_ptr,
        app::ScenesManagerPrediction* owner,
        app::Vector2 extrapolated_position,
        app::Vector2 speed,
        float speed_multiplier,
        app::Color debug_color,
        app::ScenesManagerPrediction_UpdatePositionType__Enum update_type
    )
    IL2CPP_REGISTER_METHOD(0x001241C0, bool, get_IsFinished, app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001241D0, void, Update, app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001241F0, void, UpdateIterationStart, app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00124200, void, UpdateIterationContinuation, app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed* this_ptr)
} // namespace app::classes::ScenesManagerPrediction_UpdateExtrapolatedPositionTask
