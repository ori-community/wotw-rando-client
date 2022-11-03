#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::frameworks::loading::Prewarmers::ActivateIntroLogosPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F5D670, void, ctor, (app::ActivateIntroLogosPrewarmOperation * this_ptr, app::LoadIntroLogosPrewarmOperation* load_op))
    IL2CPP_REGISTER_METHOD(0x00F5D720, bool, Begin, (app::ActivateIntroLogosPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5D7F0, bool, Update, (app::ActivateIntroLogosPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, FinishImmediately, (app::ActivateIntroLogosPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, (app::ActivateIntroLogosPrewarmOperation * this_ptr, int32_t xbegin, int32_t ybegin))
} // namespace app::classes::frameworks::loading::Prewarmers::ActivateIntroLogosPrewarmOperation
