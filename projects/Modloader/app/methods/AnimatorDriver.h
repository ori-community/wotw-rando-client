#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimatorDriver.h>

namespace app::classes::AnimatorDriver {
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_IsPlaying, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504D90, void, set_IsPlaying, app::AnimatorDriver* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00504E40, float, get_Duration, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504E60, bool, get_IsReversed, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504E70, float, get_CurrentTime, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504E80, void, set_CurrentTime, app::AnimatorDriver* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00504E90, float, get_NormalizedCurrentTime, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504ED0, void, Restart, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504F70, void, RestartForward, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504F90, void, RestartBackwards, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504FB0, void, Stop, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00505130, void, StopDontSample, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00505280, void, Pause, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00505290, void, Resume, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005052A0, void, Reverse, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005052C0, void, SetForward, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00505380, void, SetBackwards, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00505440, void, ContinueForward, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00505470, void, ContinueBackwards, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005054A0, void, GoToStart, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005054E0, void, GoToEnd, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00505530, void, UpdateTowards, app::AnimatorDriver* this_ptr, float time, float delta_time)
    IL2CPP_REGISTER_METHOD(0x005056A0, void, FixedUpdate, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00505860, void, OnPoolSpawned, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00505870, void, Sample, app::AnimatorDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005058D0, void, ctor, app::AnimatorDriver* this_ptr)
} // namespace app::classes::AnimatorDriver
