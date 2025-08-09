#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioPrewarmOperation.h>

namespace app::classes::frameworks::loading::Prewarmers::AudioPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F5DDD0, void, ctor, app::AudioPrewarmOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F5DE70, bool, Begin, app::AudioPrewarmOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F5DED0, bool, Update, app::AudioPrewarmOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, FinishImmediately, app::AudioPrewarmOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, app::AudioPrewarmOperation* this_ptr, int32_t xbegin, int32_t ybegin)
} // namespace app::classes::frameworks::loading::Prewarmers::AudioPrewarmOperation
