#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XboxRecorder.h>

namespace app::classes::XboxRecorder {
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_Recording, (app::XboxRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_Recording, (app::XboxRecorder * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01C5C3A0, void, Update, (app::XboxRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C5C420, void, StartRecording, (app::XboxRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C5C430, void, StopRecording, (app::XboxRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C5C460, void, SetRecording, (app::XboxRecorder * this_ptr, bool record))
    IL2CPP_REGISTER_METHOD(0x01C5C4A0, void, RequestReplay, (app::XboxRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C5C7D0, void, CloseConnection, (app::XboxRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::XboxRecorder * this_ptr))
} // namespace app::classes::XboxRecorder
