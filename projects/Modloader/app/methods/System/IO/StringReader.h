#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::IO::StringReader {
    IL2CPP_REGISTER_METHOD(0x02383B30, void, ctor, (app::StringReader * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHODINFO(0x0473EE38, StringReader__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02380650, void, Close, (app::StringReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016644A0, void, Dispose, (app::StringReader * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02383C10, int32_t, Peek, (app::StringReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02383C50, int32_t, Read_1, (app::StringReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02383C90, int32_t, Read_2, (app::StringReader * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04719748, StringReader_Read_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02383EA0, app::String*, ReadToEnd, (app::StringReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02383EE0, app::String*, ReadLine, (app::StringReader * this_ptr))
} // namespace app::classes::System::IO::StringReader
