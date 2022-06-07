#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkAudioSourceChangeCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkAudioSourceChangeCallbackInfo * this_ptr, void * c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026C9C30, void *, getCPtr, (app::AkAudioSourceChangeCallbackInfo * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkAudioSourceChangeCallbackInfo * this_ptr, void * c_ptr))
    IL2CPP_REGISTER_METHOD(0x026C9CC0, void, Finalize, (app::AkAudioSourceChangeCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C9D40, void, Dispose, (app::AkAudioSourceChangeCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C9F50, bool, get_bOtherAudioPlaying, (app::AkAudioSourceChangeCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CA080, void, ctor_2, (app::AkAudioSourceChangeCallbackInfo * this_ptr))
}
