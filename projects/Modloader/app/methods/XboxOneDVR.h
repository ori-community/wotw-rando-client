#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XboxOneDVR.h>

namespace app::classes::XboxOneDVR {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanUseDVR, ())
    IL2CPP_REGISTER_METHOD(0x00597BE0, bool, get_EnableDVR, ())
    IL2CPP_REGISTER_METHOD(0x00597C80, void, set_EnableDVR, (bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_WaitingForClip, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_WaitingForClip, (bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RecordPast, (float seconds, app::String* clip_name, bool cancel_existing))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RecordFuture, (float seconds, app::String* clip_name, bool cancel_existing))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, StartRecording, (bool cancel_existing))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, StopRecording, (app::String * clip_name))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CancelRecording, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XboxOneDVR * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597D30, void, cctor, ())
} // namespace app::classes::XboxOneDVR
