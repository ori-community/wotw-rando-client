#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Wwise::ListenerSyncProcessor {
    IL2CPP_REGISTER_METHOD(0x02709E80, void, Initialize, (app::ListenerSyncProcessor * this_ptr, app::AkWwiseInitializationSettings* config))
    IL2CPP_REGISTER_METHOD(0x0270A140, void, ReregisterAudioListeners, (app::ListenerSyncProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270A270, void, RegisterListenerSync, (app::ListenerSyncProcessor * this_ptr, app::SoundListener* listener, int32_t frame_quantization))
    IL2CPP_REGISTER_METHOD(0x0270A450, void, Update, (app::ListenerSyncProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270A530, void, CommitDefaultSetIfNeeded, (app::ListenerSyncProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListenerSyncProcessor * this_ptr))
} // namespace app::classes::Moon::Wwise::ListenerSyncProcessor
