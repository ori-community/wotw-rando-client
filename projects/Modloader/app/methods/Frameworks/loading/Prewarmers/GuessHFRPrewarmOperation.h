#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GuessHFRPrewarmOperation.h>

namespace app::classes::frameworks::loading::Prewarmers::GuessHFRPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F5FF40, void, ctor, (app::GuessHFRPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F60030, bool, Begin, (app::GuessHFRPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F60230, bool, Update, (app::GuessHFRPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, FinishImmediately, (app::GuessHFRPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsSupportedPlatform, (app::GuessHFRPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F60410, int32_t, DebugDrawStatus, (app::GuessHFRPrewarmOperation * this_ptr, int32_t xbegin, int32_t ybegin))
} // namespace app::classes::frameworks::loading::Prewarmers::GuessHFRPrewarmOperation
