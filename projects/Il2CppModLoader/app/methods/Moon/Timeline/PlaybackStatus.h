#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::PlaybackStatus {
    IL2CPP_REGISTER_METHOD(0x011FE8D0, bool, get_IsPending, (app::PlaybackStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsFinished, (app::PlaybackStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_IsFinished, (app::PlaybackStatus * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x011FE860, bool, get_IsPlaying, (app::PlaybackStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_IsStarted, (app::PlaybackStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C660, void, set_IsStarted, (app::PlaybackStatus * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_StartTime, (app::PlaybackStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83F40, void, set_StartTime, (app::PlaybackStatus * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_StartFrame, (app::PlaybackStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_StartFrame, (app::PlaybackStatus * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_EndTime, (app::PlaybackStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_EndTime, (app::PlaybackStatus * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_EndFrame, (app::PlaybackStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_EndFrame, (app::PlaybackStatus * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_LocalTime, (app::PlaybackStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012219F0, void, set_LocalTime, (app::PlaybackStatus * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_LocalFrame, (app::PlaybackStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_LocalFrame, (app::PlaybackStatus * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01E79450, void, Reset, (app::PlaybackStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E79470, void, ReportStart, (app::PlaybackStatus * this_ptr, float time, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x01E79480, void, ReportStop, (app::PlaybackStatus * this_ptr, float time, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x01E79490, void, ReportLocal, (app::PlaybackStatus * this_ptr, float time, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlaybackStatus * this_ptr))
} // namespace app::classes::Moon::Timeline::PlaybackStatus
