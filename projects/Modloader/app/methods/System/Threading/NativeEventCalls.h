#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::NativeEventCalls {
    IL2CPP_REGISTER_METHOD(0x027E1250, void*, CreateEvent_internal, (bool manual, bool initial, app::String* name, int32_t* error_code))
    IL2CPP_REGISTER_METHOD(0x027E12E0, bool, SetEvent, (app::SafeWaitHandle * handle))
    IL2CPP_REGISTER_METHOD(0x027E13E0, bool, SetEvent_internal, (void* handle))
    IL2CPP_REGISTER_METHOD(0x027E1410, bool, ResetEvent, (app::SafeWaitHandle * handle))
    IL2CPP_REGISTER_METHOD(0x027E1510, bool, ResetEvent_internal, (void* handle))
    IL2CPP_REGISTER_METHOD(0x027E1540, void, CloseEvent_internal, (void* handle))
} // namespace app::classes::System::Threading::NativeEventCalls
