#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkMIDIEvent_tChanAftertouch {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkMIDIEvent_tChanAftertouch * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026F3040, void*, getCPtr, (app::AkMIDIEvent_tChanAftertouch * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMIDIEvent_tChanAftertouch * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026F30D0, void, Finalize, (app::AkMIDIEvent_tChanAftertouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F3150, void, Dispose, (app::AkMIDIEvent_tChanAftertouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F3360, void, set_byValue, (app::AkMIDIEvent_tChanAftertouch * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F3490, uint8_t, get_byValue, (app::AkMIDIEvent_tChanAftertouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F35B0, void, ctor_2, (app::AkMIDIEvent_tChanAftertouch * this_ptr))
} // namespace app::classes::AkMIDIEvent_tChanAftertouch
