#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeflateStreamNative_SafeDeflateStreamHandle.h>

namespace app::classes::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle {
    IL2CPP_REGISTER_METHOD(0x02009980, bool, get_IsInvalid, (app::DeflateStreamNative_SafeDeflateStreamHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02009A00, void, ctor, (app::DeflateStreamNative_SafeDeflateStreamHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02009AF0, bool, ReleaseHandle, (app::DeflateStreamNative_SafeDeflateStreamHandle * this_ptr))
} // namespace app::classes::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle
