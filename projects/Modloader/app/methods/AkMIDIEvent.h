#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkMIDIEvent.h>
#include <Modloader/app/structs/AkMIDIEvent_tGen.h>
#include <Modloader/app/structs/AkMIDIEvent_tCc.h>
#include <Modloader/app/structs/AkMIDIEvent_tNoteOnOff.h>
#include <Modloader/app/structs/AkMIDIEvent_tPitchBend.h>
#include <Modloader/app/structs/AkMIDIEvent_tNoteAftertouch.h>
#include <Modloader/app/structs/AkMIDIEvent_tChanAftertouch.h>
#include <Modloader/app/structs/AkMIDIEvent_tProgramChange.h>
#include <Modloader/app/structs/AkMIDIEventTypes__Enum.h>
#include <Modloader/app/structs/AkMIDICcTypes__Enum.h>

namespace app::classes::AkMIDIEvent {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkMIDIEvent * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026EEE00, void*, getCPtr, (app::AkMIDIEvent * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMIDIEvent * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026EEE90, void, Finalize, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EEF10, void, Dispose, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EF120, void, set_byChan, (app::AkMIDIEvent * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026EF250, uint8_t, get_byChan, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EF370, void, set_Gen, (app::AkMIDIEvent * this_ptr, app::AkMIDIEvent_tGen* value))
    IL2CPP_REGISTER_METHOD(0x026EF500, app::AkMIDIEvent_tGen*, get_Gen, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EF710, void, set_Cc, (app::AkMIDIEvent * this_ptr, app::AkMIDIEvent_tCc* value))
    IL2CPP_REGISTER_METHOD(0x026EF8A0, app::AkMIDIEvent_tCc*, get_Cc, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EFAB0, void, set_NoteOnOff, (app::AkMIDIEvent * this_ptr, app::AkMIDIEvent_tNoteOnOff* value))
    IL2CPP_REGISTER_METHOD(0x026EFC40, app::AkMIDIEvent_tNoteOnOff*, get_NoteOnOff, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EFE50, void, set_PitchBend, (app::AkMIDIEvent * this_ptr, app::AkMIDIEvent_tPitchBend* value))
    IL2CPP_REGISTER_METHOD(0x026EFFE0, app::AkMIDIEvent_tPitchBend*, get_PitchBend, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F01F0, void, set_NoteAftertouch, (app::AkMIDIEvent * this_ptr, app::AkMIDIEvent_tNoteAftertouch* value))
    IL2CPP_REGISTER_METHOD(0x026F0380, app::AkMIDIEvent_tNoteAftertouch*, get_NoteAftertouch, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F0590, void, set_ChanAftertouch, (app::AkMIDIEvent * this_ptr, app::AkMIDIEvent_tChanAftertouch* value))
    IL2CPP_REGISTER_METHOD(0x026F0720, app::AkMIDIEvent_tChanAftertouch*, get_ChanAftertouch, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F0930, void, set_ProgramChange, (app::AkMIDIEvent * this_ptr, app::AkMIDIEvent_tProgramChange* value))
    IL2CPP_REGISTER_METHOD(0x026F0AC0, app::AkMIDIEvent_tProgramChange*, get_ProgramChange, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F0CD0, void, set_byType, (app::AkMIDIEvent * this_ptr, app::AkMIDIEventTypes__Enum value))
    IL2CPP_REGISTER_METHOD(0x026F0E00, app::AkMIDIEventTypes__Enum, get_byType, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F0F20, void, set_byOnOffNote, (app::AkMIDIEvent * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F1050, uint8_t, get_byOnOffNote, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F1170, void, set_byVelocity, (app::AkMIDIEvent * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F12A0, uint8_t, get_byVelocity, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F13C0, void, set_byCc, (app::AkMIDIEvent * this_ptr, app::AkMIDICcTypes__Enum value))
    IL2CPP_REGISTER_METHOD(0x026F14F0, app::AkMIDICcTypes__Enum, get_byCc, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F1610, void, set_byCcValue, (app::AkMIDIEvent * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F1740, uint8_t, get_byCcValue, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F1860, void, set_byValueLsb, (app::AkMIDIEvent * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F1990, uint8_t, get_byValueLsb, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F1AB0, void, set_byValueMsb, (app::AkMIDIEvent * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F1BE0, uint8_t, get_byValueMsb, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F1D00, void, set_byAftertouchNote, (app::AkMIDIEvent * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F1E30, uint8_t, get_byAftertouchNote, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F1F50, void, set_byNoteAftertouchValue, (app::AkMIDIEvent * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F2080, uint8_t, get_byNoteAftertouchValue, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F21A0, void, set_byChanAftertouchValue, (app::AkMIDIEvent * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F22D0, uint8_t, get_byChanAftertouchValue, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F23F0, void, set_byProgramNum, (app::AkMIDIEvent * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026F2520, uint8_t, get_byProgramNum, (app::AkMIDIEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F2640, void, ctor_2, (app::AkMIDIEvent * this_ptr))
} // namespace app::classes::AkMIDIEvent
