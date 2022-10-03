#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkDurationCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x026E0E40, void, ctor_1, (app::AkDurationCallbackInfo * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026E0F10, void*, getCPtr, (app::AkDurationCallbackInfo * obj))
    IL2CPP_REGISTER_METHOD(0x026E0FA0, void, setCPtr, (app::AkDurationCallbackInfo * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026E1060, void, Finalize, (app::AkDurationCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E1100, void, Dispose, (app::AkDurationCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E1320, float, get_fDuration, (app::AkDurationCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E1440, float, get_fEstimatedDuration, (app::AkDurationCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E1560, uint32_t, get_audioNodeID, (app::AkDurationCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E1680, uint32_t, get_mediaID, (app::AkDurationCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E17A0, bool, get_bStreaming, (app::AkDurationCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E18D0, void, ctor_2, (app::AkDurationCallbackInfo * this_ptr))
} // namespace app::classes::AkDurationCallbackInfo
