#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::AsyncStreamReader {
    IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Close, (app::AsyncStreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFE440, void, IDisposable_Dispose, (app::AsyncStreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFE4F0, void, Dispose, (app::AsyncStreamReader * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x00DC8A40, void, CancelOperation, (app::AsyncStreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFE620, void, WaitUtilEOF, (app::AsyncStreamReader * this_ptr))
}
