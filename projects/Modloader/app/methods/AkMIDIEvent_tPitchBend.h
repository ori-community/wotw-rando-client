#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkMIDIEvent_tPitchBend {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkMIDIEvent_tPitchBend * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026F5170, void*, getCPtr, (app::AkMIDIEvent_tPitchBend * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMIDIEvent_tPitchBend * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026F5200, void, Finalize, (app::AkMIDIEvent_tPitchBend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F5280, void, Dispose, (app::AkMIDIEvent_tPitchBend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F5490, void, set_byValueLsb, (app::AkMIDIEvent_tPitchBend * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F55C0, uint8_t, get_byValueLsb, (app::AkMIDIEvent_tPitchBend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F56E0, void, set_byValueMsb, (app::AkMIDIEvent_tPitchBend * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F5810, uint8_t, get_byValueMsb, (app::AkMIDIEvent_tPitchBend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F5930, void, ctor_2, (app::AkMIDIEvent_tPitchBend * this_ptr))
} // namespace app::classes::AkMIDIEvent_tPitchBend
