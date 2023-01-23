#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CreditsTextPosition.h>

namespace app::classes::CreditsTextPosition {
    IL2CPP_REGISTER_METHOD(0x00DB7970, bool, get_IsLooping, (app::CreditsTextPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::CreditsTextPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB7980, void, SampleValue, (app::CreditsTextPosition * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00DB82C0, float, get_Duration, (app::CreditsTextPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB82D0, void, RestoreToOriginalState, (app::CreditsTextPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB8440, void, ctor, (app::CreditsTextPosition * this_ptr))
} // namespace app::classes::CreditsTextPosition
