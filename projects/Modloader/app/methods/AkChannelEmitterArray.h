#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkChannelEmitterArray {
    IL2CPP_REGISTER_METHOD(0x026D8190, void, ctor, (app::AkChannelEmitterArray * this_ptr, uint32_t in__count))
    IL2CPP_REGISTER_METHOD(0x00529E80, uint32_t, get_Count, (app::AkChannelEmitterArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Count, (app::AkChannelEmitterArray * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026D8250, void, Dispose, (app::AkChannelEmitterArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026D8310, void, Finalize, (app::AkChannelEmitterArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188F7E0, void, Reset, (app::AkChannelEmitterArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026D8420, void, Add, (app::AkChannelEmitterArray * this_ptr, app::Vector3 in__pos, app::Vector3 in__forward, app::Vector3 in__top, uint32_t in__channel_mask))
    IL2CPP_REGISTER_METHODINFO(0x0470C6A0, AkChannelEmitterArray_Add__MethodInfo)
} // namespace app::classes::AkChannelEmitterArray
