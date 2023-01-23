#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkDynamicSequenceItemCallbackInfo.h>

namespace app::classes::AkDynamicSequenceItemCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x026E19F0, void, ctor_1, (app::AkDynamicSequenceItemCallbackInfo * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026E1AB0, void*, getCPtr, (app::AkDynamicSequenceItemCallbackInfo * obj))
    IL2CPP_REGISTER_METHOD(0x026E1B40, void, setCPtr, (app::AkDynamicSequenceItemCallbackInfo * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026E1C10, void, Finalize, (app::AkDynamicSequenceItemCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E1CB0, void, Dispose, (app::AkDynamicSequenceItemCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E1ED0, uint32_t, get_playingID, (app::AkDynamicSequenceItemCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E1FF0, uint32_t, get_audioNodeID, (app::AkDynamicSequenceItemCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E2110, void*, get_pCustomInfo, (app::AkDynamicSequenceItemCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E2230, void, ctor_2, (app::AkDynamicSequenceItemCallbackInfo * this_ptr))
} // namespace app::classes::AkDynamicSequenceItemCallbackInfo
