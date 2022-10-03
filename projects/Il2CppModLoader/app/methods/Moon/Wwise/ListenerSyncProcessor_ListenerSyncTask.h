#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Wwise::ListenerSyncProcessor_ListenerSyncTask {
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_FrameQuantinization, (app::ListenerSyncProcessor_ListenerSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_FrameQuantinization, (app::ListenerSyncProcessor_ListenerSyncTask * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::SoundListenerReference, get_Listener, (app::ListenerSyncProcessor_ListenerSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD40, void, set_Listener, (app::ListenerSyncProcessor_ListenerSyncTask * this_ptr, app::SoundListenerReference value))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsInitialized, (app::ListenerSyncProcessor_ListenerSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_IsInitialized, (app::ListenerSyncProcessor_ListenerSyncTask * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::ListenerSyncProcessor_ListenerSyncTask * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x0270A800, bool, get_IsValid, (app::ListenerSyncProcessor_ListenerSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270A820, bool, get_ShouldBeUpdatedThisFrame, (app::ListenerSyncProcessor_ListenerSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270A8A0, void, Reset, (app::ListenerSyncProcessor_ListenerSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270A8D0, void, Bind, (app::ListenerSyncProcessor_ListenerSyncTask * this_ptr, app::SoundListenerReference listener, int32_t frame_quantinization))
} // namespace app::classes::Moon::Wwise::ListenerSyncProcessor_ListenerSyncTask
