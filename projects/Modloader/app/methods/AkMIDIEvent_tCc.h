#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkMIDIEvent_tCc.h>

namespace app::classes::AkMIDIEvent_tCc {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkMIDIEvent_tCc * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026F2760, void*, getCPtr, (app::AkMIDIEvent_tCc * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMIDIEvent_tCc * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026F27F0, void, Finalize, (app::AkMIDIEvent_tCc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F2870, void, Dispose, (app::AkMIDIEvent_tCc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F2A80, void, set_byCc, (app::AkMIDIEvent_tCc * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F2BB0, uint8_t, get_byCc, (app::AkMIDIEvent_tCc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F2CD0, void, set_byValue, (app::AkMIDIEvent_tCc * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F2E00, uint8_t, get_byValue, (app::AkMIDIEvent_tCc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F2F20, void, ctor_2, (app::AkMIDIEvent_tCc * this_ptr))
} // namespace app::classes::AkMIDIEvent_tCc
