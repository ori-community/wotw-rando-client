#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LegacyActivateDamageDealerAnimator {
    IL2CPP_REGISTER_METHOD(0x004C87D0, void, OnStartPlay, (app::LegacyActivateDamageDealerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87F0, void, OnStopPlay, (app::LegacyActivateDamageDealerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CAEA0, void, CacheOriginals, (app::LegacyActivateDamageDealerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CAED0, void, SampleValue, (app::LegacyActivateDamageDealerAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x015CAF00, void, RestoreToOriginalState, (app::LegacyActivateDamageDealerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C88C0, float, get_Duration, (app::LegacyActivateDamageDealerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::LegacyActivateDamageDealerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C88D0, void, ctor, (app::LegacyActivateDamageDealerAnimator * this_ptr))
} // namespace app::classes::LegacyActivateDamageDealerAnimator
