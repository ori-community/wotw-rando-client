#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkMIDIEvent_tGen {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkMIDIEvent_tGen * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026F36D0, void*, getCPtr, (app::AkMIDIEvent_tGen * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMIDIEvent_tGen * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026F3760, void, Finalize, (app::AkMIDIEvent_tGen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F37E0, void, Dispose, (app::AkMIDIEvent_tGen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F39F0, void, set_byParam1, (app::AkMIDIEvent_tGen * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F3B20, uint8_t, get_byParam1, (app::AkMIDIEvent_tGen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F3C40, void, set_byParam2, (app::AkMIDIEvent_tGen * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F3D70, uint8_t, get_byParam2, (app::AkMIDIEvent_tGen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F3E90, void, ctor_2, (app::AkMIDIEvent_tGen * this_ptr))
} // namespace app::classes::AkMIDIEvent_tGen
