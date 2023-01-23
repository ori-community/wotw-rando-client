#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkMarkerCallbackInfo.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkMarkerCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x026F88A0, void, ctor_1, (app::AkMarkerCallbackInfo * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026F8970, void*, getCPtr, (app::AkMarkerCallbackInfo * obj))
    IL2CPP_REGISTER_METHOD(0x026F8A00, void, setCPtr, (app::AkMarkerCallbackInfo * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026F8AC0, void, Finalize, (app::AkMarkerCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F8B60, void, Dispose, (app::AkMarkerCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F8D80, uint32_t, get_uIdentifier, (app::AkMarkerCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F8EA0, uint32_t, get_uPosition, (app::AkMarkerCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F8FC0, app::String*, get_strLabel, (app::AkMarkerCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F9110, void, ctor_2, (app::AkMarkerCallbackInfo * this_ptr))
} // namespace app::classes::AkMarkerCallbackInfo
