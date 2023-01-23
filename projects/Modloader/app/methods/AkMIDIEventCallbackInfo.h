#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkMIDIEventCallbackInfo.h>
#include <Modloader/app/structs/AkMIDIEventTypes__Enum.h>
#include <Modloader/app/structs/AkMIDICcTypes__Enum.h>

namespace app::classes::AkMIDIEventCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x026F60E0, void, ctor_1, (app::AkMIDIEventCallbackInfo * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026F61B0, void*, getCPtr, (app::AkMIDIEventCallbackInfo * obj))
    IL2CPP_REGISTER_METHOD(0x026F6240, void, setCPtr, (app::AkMIDIEventCallbackInfo * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026F6300, void, Finalize, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F63A0, void, Dispose, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F65C0, uint8_t, get_byChan, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F66E0, uint8_t, get_byParam1, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F6800, uint8_t, get_byParam2, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F6920, app::AkMIDIEventTypes__Enum, get_byType, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F6A40, uint8_t, get_byOnOffNote, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F6B60, uint8_t, get_byVelocity, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F6C80, app::AkMIDICcTypes__Enum, get_byCc, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F6DA0, uint8_t, get_byCcValue, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F6EC0, uint8_t, get_byValueLsb, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F6FE0, uint8_t, get_byValueMsb, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F7100, uint8_t, get_byAftertouchNote, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F7220, uint8_t, get_byNoteAftertouchValue, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F7340, uint8_t, get_byChanAftertouchValue, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F7460, uint8_t, get_byProgramNum, (app::AkMIDIEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F7580, void, ctor_2, (app::AkMIDIEventCallbackInfo * this_ptr))
} // namespace app::classes::AkMIDIEventCallbackInfo
