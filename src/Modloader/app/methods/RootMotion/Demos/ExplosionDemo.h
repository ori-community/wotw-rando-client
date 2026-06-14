#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExplosionDemo.h>

namespace app::classes::RootMotion::Demos::ExplosionDemo {
    IL2CPP_REGISTER_METHOD(0x022188A0, void, Start, app::ExplosionDemo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02218A30, void, Update, app::ExplosionDemo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022194F0, void, SetEffectorWeights, app::ExplosionDemo* this_ptr, float w)
    IL2CPP_REGISTER_METHOD(0x02219670, void, ctor, app::ExplosionDemo* this_ptr)
} // namespace app::classes::RootMotion::Demos::ExplosionDemo
