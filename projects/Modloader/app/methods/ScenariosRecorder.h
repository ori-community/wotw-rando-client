#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ScenariosRecorder {
    IL2CPP_REGISTER_METHOD(0x00935960, app::ScenarioRecorderState__Enum, get_State, ())
    IL2CPP_REGISTER_METHOD(0x00935A00, void, set_State, (app::ScenarioRecorderState__Enum value))
    IL2CPP_REGISTER_METHOD(0x00935AB0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00935B40, void, Awake, (app::ScenariosRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00935C20, void, OnDestroy, (app::ScenariosRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00935CD0, void, Update, (app::ScenariosRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00935F10, void, StartRecording, (app::ScenariosRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00937080, void, EndRecording, (app::ScenariosRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::ScenariosRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00937180, app::String*, GetScenarioFolderPath, (app::String * scene_name))
    IL2CPP_REGISTER_METHOD(0x00937210, app::String__Array*, GetScenarioFilesForPath, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ScenariosRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009373B0, void, cctor, ())
} // namespace app::classes::ScenariosRecorder
