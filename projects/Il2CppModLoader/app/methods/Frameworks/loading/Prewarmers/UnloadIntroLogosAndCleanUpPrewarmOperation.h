#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::frameworks::loading::Prewarmers::UnloadIntroLogosAndCleanUpPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F62740, void, ctor, (app::UnloadIntroLogosAndCleanUpPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Begin, (app::UnloadIntroLogosAndCleanUpPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62820, void, UnloadAndCleanUp, (app::UnloadIntroLogosAndCleanUpPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62AE0, bool, Update, (app::UnloadIntroLogosAndCleanUpPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62B50, bool, FinishImmediately, (app::UnloadIntroLogosAndCleanUpPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, (app::UnloadIntroLogosAndCleanUpPrewarmOperation * this_ptr, int32_t xbegin, int32_t ybegin))
} // namespace app::classes::frameworks::loading::Prewarmers::UnloadIntroLogosAndCleanUpPrewarmOperation
