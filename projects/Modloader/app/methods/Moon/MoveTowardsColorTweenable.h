#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MoveTowardsColorTweenable.h>

namespace app::classes::Moon::MoveTowardsColorTweenable {
    IL2CPP_REGISTER_METHOD(
        0x01BAAF40,
        app::Color,
        Update,
        app::MoveTowardsColorTweenable* this_ptr,
        app::Color current_value,
        app::Color start_value,
        app::Color end_value,
        float speed
    )
    IL2CPP_REGISTER_METHOD(
        0x01BAB0D0,
        bool,
        HasFinished,
        app::MoveTowardsColorTweenable* this_ptr,
        app::Color current_value,
        app::Color start_value,
        app::Color end_value,
        float speed
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoveTowardsColorTweenable* this_ptr)
} // namespace app::classes::Moon::MoveTowardsColorTweenable
