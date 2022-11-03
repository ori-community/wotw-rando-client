#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::usedStandaloneScripts::DeltaTimeManagers::Utils {
    IL2CPP_REGISTER_METHOD(0x03125A70, double, VapsSmoothing_1, (app::DeltaTimeManager_DeltaTimeFrameHistory__Array * history, int32_t history_length, double max_deviant_k, double max_frame_time_milliseconds))
    IL2CPP_REGISTER_METHOD(0x03125D50, double, VapsSmoothing_2, (app::Single__Array * history, int32_t history_length, double max_deviant_k, double max_value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Utils_5 * this_ptr))
} // namespace app::classes::usedStandaloneScripts::DeltaTimeManagers::Utils
