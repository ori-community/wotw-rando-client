#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkCallbackInfo * this_ptr, void * c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026CFCB0, void *, getCPtr, (app::AkCallbackInfo * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkCallbackInfo * this_ptr, void * c_ptr))
    IL2CPP_REGISTER_METHOD(0x026CFD40, void, Finalize, (app::AkCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CFDC0, void, Dispose, (app::AkCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CFFD0, void *, get_pCookie, (app::AkCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026D00F0, uint64_t, get_gameObjID, (app::AkCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026D0210, void, ctor_2, (app::AkCallbackInfo * this_ptr))
}
