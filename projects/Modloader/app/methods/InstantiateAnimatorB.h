#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::InstantiateAnimatorB {
    IL2CPP_REGISTER_METHOD(0x0062C500, int32_t, get_ServerID, (app::InstantiateAnimatorB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062C510, void, set_ServerID, (app::InstantiateAnimatorB * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0062C520, float, get_Duration, (app::InstantiateAnimatorB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::InstantiateAnimatorB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062C600, void, OnStartPlay, (app::InstantiateAnimatorB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::InstantiateAnimatorB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::InstantiateAnimatorB * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::InstantiateAnimatorB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062C8C0, void, ctor, (app::InstantiateAnimatorB * this_ptr))
} // namespace app::classes::InstantiateAnimatorB
