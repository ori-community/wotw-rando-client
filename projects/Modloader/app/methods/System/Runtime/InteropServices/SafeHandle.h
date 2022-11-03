#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::InteropServices::SafeHandle {
    IL2CPP_REGISTER_METHOD(0x01A96E40, void, ctor, (app::SafeHandle * this_ptr, void* invalid_handle_value, bool owns_handle))
    IL2CPP_REGISTER_METHOD(0x01A96F10, void, Finalize, (app::SafeHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, SetHandle, (app::SafeHandle * this_ptr, void* handle))
    IL2CPP_REGISTER_METHOD(0x002FA280, void*, DangerousGetHandle, (app::SafeHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A96FB0, bool, get_IsClosed, (app::SafeHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Close, (app::SafeHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Dispose_1, (app::SafeHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A96FC0, void, Dispose_2, (app::SafeHandle * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01A970C0, void, SetHandleAsInvalid, (app::SafeHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A971A0, void, DangerousAddRef, (app::SafeHandle * this_ptr, bool* success))
    IL2CPP_REGISTER_METHODINFO(0x0472E948, SafeHandle_DangerousAddRef__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A972B0, void, DangerousRelease, (app::SafeHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A972C0, void, InternalDispose, (app::SafeHandle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474D4D8, SafeHandle_InternalDispose__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A973A0, void, InternalFinalize, (app::SafeHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A973C0, void, DangerousReleaseInternal, (app::SafeHandle * this_ptr, bool dispose))
    IL2CPP_REGISTER_METHODINFO(0x04702688, SafeHandle_DangerousReleaseInternal__MethodInfo)
} // namespace app::classes::System::Runtime::InteropServices::SafeHandle
