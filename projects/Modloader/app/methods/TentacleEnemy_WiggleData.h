#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TentacleEnemy_WiggleData {
    IL2CPP_REGISTER_METHOD(0x00CFCF00, void, ctor, (app::TentacleEnemy_WiggleData * this_ptr, float strength, float speed, float frequency))
    IL2CPP_REGISTER_METHOD(0x00CFCF10, void, CopyFrom, (app::TentacleEnemy_WiggleData * this_ptr, app::TentacleEnemy_WiggleData* other))
    IL2CPP_REGISTER_METHOD(0x00CFCF40, void, IntrpolateTowards, (app::TentacleEnemy_WiggleData * this_ptr, app::TentacleEnemy_WiggleData* target_wiggle, float dt))
    IL2CPP_REGISTER_METHOD(0x00CFD0B0, void, Interpolate, (app::TentacleEnemy_WiggleData * this_ptr, float* current, float target, float change_rate, float dt))
    IL2CPP_REGISTER_METHOD(0x00CFD1B0, void, cctor, ())
} // namespace app::classes::TentacleEnemy_WiggleData
