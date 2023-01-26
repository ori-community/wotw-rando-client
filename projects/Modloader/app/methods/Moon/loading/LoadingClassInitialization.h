#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadingClassInitialization.h>

namespace app::classes::Moon::loading::LoadingClassInitialization {
    IL2CPP_REGISTER_METHOD(0x00F2CE80, void, ctor, (app::LoadingClassInitialization * this_ptr, bool prewarm_all_types, bool should_gc))
    IL2CPP_REGISTER_METHOD(0x00F2D0E0, void, InitThread, (app::LoadingClassInitialization * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F2D840, bool, TryGetProgress, (int32_t * progress))
    IL2CPP_REGISTER_METHOD(0x00F2D8F0, void, Run, (bool prewarm_all_types, bool should_gc))
} // namespace app::classes::Moon::loading::LoadingClassInitialization
