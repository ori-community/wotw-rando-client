#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WwiseIntegration.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundListener.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WwiseEventSystem.h>
#include <Modloader/app/structs/WwiseGameObjectSystem.h>
#include <Modloader/app/structs/WwiseSoundBankSystem.h>
#include <Modloader/app/structs/WwiseSyncProcessor.h>

namespace app::classes::Moon::Wwise::Wwise {
    IL2CPP_REGISTER_METHOD(0x0270E620, app::WwiseIntegration*, get_Engine, ())
    IL2CPP_REGISTER_METHOD(0x0270E7C0, app::SoundHost*, get_DefaultDevSoundHost, ())
    IL2CPP_REGISTER_METHOD(0x0270E860, void, set_DefaultDevSoundHost, (app::SoundHost * value))
    IL2CPP_REGISTER_METHOD(0x0270E910, app::SoundListener*, get_DefaultSoundListener, ())
    IL2CPP_REGISTER_METHOD(0x0270E9B0, void, set_DefaultSoundListener, (app::SoundListener * value))
    IL2CPP_REGISTER_METHOD(0x0270EA60, bool, get_WwiseDisabled, ())
    IL2CPP_REGISTER_METHOD(0x0270EAF0, void, InitiateDefaultDevSoundHost, (app::GameObject * w_wise_bootstrap))
    IL2CPP_REGISTER_METHOD(0x0270ED60, app::WwiseSyncProcessor*, get_Syncs, ())
    IL2CPP_REGISTER_METHOD(0x0270EF00, app::WwiseEventSystem*, get_Events, ())
    IL2CPP_REGISTER_METHOD(0x0270F0B0, app::WwiseGameObjectSystem*, get_Objects, ())
    IL2CPP_REGISTER_METHOD(0x0270F250, app::WwiseSoundBankSystem*, get_SoundBanks, ())
    IL2CPP_REGISTER_METHOD(0x0270F3F0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Log, (app::String * text))
    IL2CPP_REGISTER_METHOD(0x0270F4E0, void, LogWarning, (app::String * message))
    IL2CPP_REGISTER_METHOD(0x0270F570, void, LogError, (app::String * message))
    IL2CPP_REGISTER_METHOD(0x0270F640, void, cctor, ())
} // namespace app::classes::Moon::Wwise::Wwise
