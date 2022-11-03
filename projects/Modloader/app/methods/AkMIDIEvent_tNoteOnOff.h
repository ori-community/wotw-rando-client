#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkMIDIEvent_tNoteOnOff {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkMIDIEvent_tNoteOnOff * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026F4890, void*, getCPtr, (app::AkMIDIEvent_tNoteOnOff * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMIDIEvent_tNoteOnOff * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026F4920, void, Finalize, (app::AkMIDIEvent_tNoteOnOff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F49A0, void, Dispose, (app::AkMIDIEvent_tNoteOnOff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F4BB0, void, set_byNote, (app::AkMIDIEvent_tNoteOnOff * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F4CE0, uint8_t, get_byNote, (app::AkMIDIEvent_tNoteOnOff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F4E00, void, set_byVelocity, (app::AkMIDIEvent_tNoteOnOff * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F4F30, uint8_t, get_byVelocity, (app::AkMIDIEvent_tNoteOnOff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F5050, void, ctor_2, (app::AkMIDIEvent_tNoteOnOff * this_ptr))
} // namespace app::classes::AkMIDIEvent_tNoteOnOff
