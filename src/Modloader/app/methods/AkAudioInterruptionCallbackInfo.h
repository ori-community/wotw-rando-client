#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkAudioInterruptionCallbackInfo.h>

namespace app::classes::AkAudioInterruptionCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, app::AkAudioInterruptionCallbackInfo* this_ptr, void* c_ptr, bool c_memory_own)
    IL2CPP_REGISTER_METHOD(0x026C8DE0, void*, getCPtr, app::AkAudioInterruptionCallbackInfo* obj)
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, app::AkAudioInterruptionCallbackInfo* this_ptr, void* c_ptr)
    IL2CPP_REGISTER_METHOD(0x026C8E70, void, Finalize, app::AkAudioInterruptionCallbackInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C8EF0, void, Dispose, app::AkAudioInterruptionCallbackInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C9100, bool, get_bEnterInterruption, app::AkAudioInterruptionCallbackInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C9230, void, ctor_2, app::AkAudioInterruptionCallbackInfo* this_ptr)
} // namespace app::classes::AkAudioInterruptionCallbackInfo
