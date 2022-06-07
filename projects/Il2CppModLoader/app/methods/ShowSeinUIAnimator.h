#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ShowSeinUIAnimator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::ShowSeinUIAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007373C0, void, SampleValue, (app::ShowSeinUIAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::ShowSeinUIAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Duration, (app::ShowSeinUIAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsLooping, (app::ShowSeinUIAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00737590, void, ctor, (app::ShowSeinUIAnimator * this_ptr))
}
