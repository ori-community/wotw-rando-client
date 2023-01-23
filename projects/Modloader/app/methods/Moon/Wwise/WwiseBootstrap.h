#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WwiseBootstrap.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Wwise::WwiseBootstrap {
    IL2CPP_REGISTER_METHOD(0x0270F980, bool, get_IsProfilerRecording, ())
    IL2CPP_REGISTER_METHOD(0x0270FA20, void, set_IsProfilerRecording, (bool value))
    IL2CPP_REGISTER_METHOD(0x0270FAD0, void, ToggleProfilerRecording, ())
    IL2CPP_REGISTER_METHOD(0x0270FD40, void, StartProfilerRecording, ())
    IL2CPP_REGISTER_METHOD(0x0270FFB0, void, StopProfilerRecording, ())
    IL2CPP_REGISTER_METHOD(0x02710150, bool, get_IsValid, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02710240, bool, get_WwiseDisabled, ())
    IL2CPP_REGISTER_METHOD(0x027102E0, void, set_WwiseDisabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x02710390, void, ToggleWwiseDisable, ())
    IL2CPP_REGISTER_METHOD(0x027107D0, void, RequestMute, ())
    IL2CPP_REGISTER_METHOD(0x02710870, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x02710A80, void, Awake, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02710C50, void, Initialize, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027110A0, void, Start, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02711140, void, OnApplicationPause, (app::WwiseBootstrap * this_ptr, bool pause))
    IL2CPP_REGISTER_METHOD(0x02711230, void, OnGUI, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027112C0, void, Update, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02711730, void, OnEnable, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02711730, void, OnDisable, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02711740, void, OnDestroy, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02711740, void, OnApplicationQuit, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02711770, void, Dispose, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027119A0, void, LateUpdate, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02711B80, app::String*, ParseArgument, (app::String * flag))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WwiseBootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02711FA0, void, cctor, ())
} // namespace app::classes::Moon::Wwise::WwiseBootstrap
