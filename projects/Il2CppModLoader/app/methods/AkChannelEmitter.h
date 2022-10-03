#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkChannelEmitter {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor, (app::AkChannelEmitter * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026D78D0, void*, getCPtr, (app::AkChannelEmitter * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkChannelEmitter * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026D7960, void, Finalize, (app::AkChannelEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026D79E0, void, Dispose, (app::AkChannelEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026D7BF0, void, set_position, (app::AkChannelEmitter * this_ptr, app::AkTransform* value))
    IL2CPP_REGISTER_METHOD(0x026D7D30, app::AkTransform*, get_position, (app::AkChannelEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026D7F40, void, set_uInputChannels, (app::AkChannelEmitter * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026D8070, uint32_t, get_uInputChannels, (app::AkChannelEmitter * this_ptr))
} // namespace app::classes::AkChannelEmitter
