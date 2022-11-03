#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkEventCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x026E3EB0, void, ctor_1, (app::AkEventCallbackInfo * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026E3F70, void*, getCPtr, (app::AkEventCallbackInfo * obj))
    IL2CPP_REGISTER_METHOD(0x026E4000, void, setCPtr, (app::AkEventCallbackInfo * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026E40D0, void, Finalize, (app::AkEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E4170, void, Dispose, (app::AkEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E4390, uint32_t, get_playingID, (app::AkEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E44B0, uint32_t, get_eventID, (app::AkEventCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E45D0, void, ctor_2, (app::AkEventCallbackInfo * this_ptr))
} // namespace app::classes::AkEventCallbackInfo
