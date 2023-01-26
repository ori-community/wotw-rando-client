#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadIntroLogosPrewarmOperation.h>

namespace app::classes::frameworks::loading::Prewarmers::LoadIntroLogosPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F60840, void, ctor, (app::LoadIntroLogosPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F608E0, bool, Begin, (app::LoadIntroLogosPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F60AB0, bool, Update, (app::LoadIntroLogosPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, FinishImmediately, (app::LoadIntroLogosPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, (app::LoadIntroLogosPrewarmOperation * this_ptr, int32_t xbegin, int32_t ybegin))
} // namespace app::classes::frameworks::loading::Prewarmers::LoadIntroLogosPrewarmOperation
