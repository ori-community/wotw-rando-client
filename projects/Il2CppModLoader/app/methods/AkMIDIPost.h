#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkMIDIPost {
    IL2CPP_REGISTER_METHOD(0x026F76A0, void, ctor_1, (app::AkMIDIPost * this_ptr, void * c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026F7760, void *, getCPtr, (app::AkMIDIPost * obj))
    IL2CPP_REGISTER_METHOD(0x026F77F0, void, setCPtr, (app::AkMIDIPost * this_ptr, void * c_ptr))
    IL2CPP_REGISTER_METHOD(0x026F78C0, void, Finalize, (app::AkMIDIPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F7960, void, Dispose, (app::AkMIDIPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F7B80, void, set_uOffset, (app::AkMIDIPost * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026F7CB0, uint32_t, get_uOffset, (app::AkMIDIPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F7DD0, app::AKRESULT__Enum, PostOnEvent, (app::AkMIDIPost * this_ptr, uint32_t in_event_i_d, app::GameObject * in_game_object_i_d, uint32_t in_u_num_posts))
    IL2CPP_REGISTER_METHOD(0x026F7EE0, void, Clone, (app::AkMIDIPost * this_ptr, app::AkMIDIPost * other))
    IL2CPP_REGISTER_METHOD(0x026F8000, int32_t, GetSizeOf, ())
    IL2CPP_REGISTER_METHOD(0x026F8090, void, ctor_2, (app::AkMIDIPost * this_ptr))
}
