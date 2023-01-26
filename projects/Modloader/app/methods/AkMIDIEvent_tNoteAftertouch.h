#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkMIDIEvent_tNoteAftertouch.h>

namespace app::classes::AkMIDIEvent_tNoteAftertouch {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkMIDIEvent_tNoteAftertouch * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026F3FB0, void*, getCPtr, (app::AkMIDIEvent_tNoteAftertouch * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMIDIEvent_tNoteAftertouch * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026F4040, void, Finalize, (app::AkMIDIEvent_tNoteAftertouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F40C0, void, Dispose, (app::AkMIDIEvent_tNoteAftertouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F42D0, void, set_byNote, (app::AkMIDIEvent_tNoteAftertouch * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F4400, uint8_t, get_byNote, (app::AkMIDIEvent_tNoteAftertouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F4520, void, set_byValue, (app::AkMIDIEvent_tNoteAftertouch * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F4650, uint8_t, get_byValue, (app::AkMIDIEvent_tNoteAftertouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F4770, void, ctor_2, (app::AkMIDIEvent_tNoteAftertouch * this_ptr))
} // namespace app::classes::AkMIDIEvent_tNoteAftertouch
