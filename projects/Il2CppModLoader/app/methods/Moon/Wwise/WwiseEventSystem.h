#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Wwise::WwiseEventSystem {
    IL2CPP_REGISTER_METHOD(0x027123C0, void, Initialize, (app::WwiseEventSystem * this_ptr, app::AkWwiseInitializationSettings* config))
    IL2CPP_REGISTER_METHOD(0x02712800, uint32_t, FireAndForget_1, (app::WwiseEventSystem * this_ptr, app::Event_1* wise_event, app::ISoundHost* host))
    IL2CPP_REGISTER_METHOD(0x02712EF0, void, FireAndForget_2, (app::WwiseEventSystem * this_ptr, uint32_t wise_event_id, app::ISoundHost* host))
    IL2CPP_REGISTER_METHOD(0x02712FF0, app::WwiseEventSystem_SoundHandle, AllocateHandle, (app::WwiseEventSystem * this_ptr, app::Event_1* wise_event, app::ISoundHost* host))
    IL2CPP_REGISTER_METHOD(0x027130D0, app::WwiseEventSystem_SoundHandleProtected*, GetFreeSoundHandle, (app::WwiseEventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02713270, void, StopAll, (app::WwiseEventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::WwiseEventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::WwiseEventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02713300, void, ctor, (app::WwiseEventSystem * this_ptr))
} // namespace app::classes::Moon::Wwise::WwiseEventSystem
