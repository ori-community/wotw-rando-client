#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkCallbackSerializer.h>
#include <Modloader/app/structs/AKRESULT__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::AkCallbackSerializer {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkCallbackSerializer * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026D52B0, void*, getCPtr, (app::AkCallbackSerializer * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkCallbackSerializer * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026D5340, void, Finalize, (app::AkCallbackSerializer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026D53C0, void, Dispose, (app::AkCallbackSerializer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026D55D0, app::AKRESULT__Enum, Init, (void* in_p_memory, uint32_t in_u_size))
    IL2CPP_REGISTER_METHOD(0x026D5700, void, Term, ())
    IL2CPP_REGISTER_METHOD(0x026D5810, void*, Lock, ())
    IL2CPP_REGISTER_METHOD(0x026D5920, void, SetLocalOutput, (uint32_t in_u_error_level))
    IL2CPP_REGISTER_METHOD(0x026D5A40, void, Unlock, ())
    IL2CPP_REGISTER_METHOD(0x026D5B50, app::AKRESULT__Enum, AudioSourceChangeCallbackFunc, (bool in_b_other_audio_playing, app::Object* in_p_cookie))
    IL2CPP_REGISTER_METHOD(0x026D5CA0, void, ctor_2, (app::AkCallbackSerializer * this_ptr))
} // namespace app::classes::AkCallbackSerializer
