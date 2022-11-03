#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkMIDIEvent_tProgramChange {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkMIDIEvent_tProgramChange * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026F5A50, void*, getCPtr, (app::AkMIDIEvent_tProgramChange * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMIDIEvent_tProgramChange * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026F5AE0, void, Finalize, (app::AkMIDIEvent_tProgramChange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F5B60, void, Dispose, (app::AkMIDIEvent_tProgramChange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F5D70, void, set_byProgramNum, (app::AkMIDIEvent_tProgramChange * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F5EA0, uint8_t, get_byProgramNum, (app::AkMIDIEvent_tProgramChange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F5FC0, void, ctor_2, (app::AkMIDIEvent_tProgramChange * this_ptr))
} // namespace app::classes::AkMIDIEvent_tProgramChange
