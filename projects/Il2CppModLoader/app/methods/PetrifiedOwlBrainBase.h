#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlBrainBase {
    IL2CPP_REGISTER_METHOD(0x017824F0, float, get_Duration, (app::PetrifiedOwlBrainBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01782500, void, Awake, (app::PetrifiedOwlBrainBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017826E0, void, OnDestroy, (app::PetrifiedOwlBrainBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017828A0, void, OnPreRestore, (app::PetrifiedOwlBrainBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017828E0, void, OnStartPlay, (app::PetrifiedOwlBrainBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCA8C0, void, OnStopPlay, (app::PetrifiedOwlBrainBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017828F0, void, SampleValue, (app::PetrifiedOwlBrainBase * this_ptr, float time, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::PetrifiedOwlBrainBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01782920, void, OnFixedUpdate, (app::PetrifiedOwlBrainBase * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01782950, void, StopBrain, (app::PetrifiedOwlBrainBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01782960, void, AddAnimationMask, (app::PetrifiedOwlBrainBase * this_ptr, app::GameObject * mask_prefab, float speed))
    IL2CPP_REGISTER_METHOD(0x01782AB0, void, ClearAnimationMasks, (app::PetrifiedOwlBrainBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01782C40, void, ctor, (app::PetrifiedOwlBrainBase * this_ptr))
}
