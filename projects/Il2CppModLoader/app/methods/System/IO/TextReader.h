#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::IO::TextReader {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TextReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02384AD0, void, Close, (app::TextReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02384B80, void, Dispose_1, (app::TextReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_2, (app::TextReader * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, Peek, (app::TextReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, Read_1, (app::TextReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02384C30, int32_t, Read_2, (app::TextReader * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0470BEF8, TextReader_Read_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02384E50, app::String*, ReadToEnd, (app::TextReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02385040, app::String*, ReadLine, (app::TextReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02385370, app::TextReader*, Synchronized, (app::TextReader * reader))
    IL2CPP_REGISTER_METHODINFO(0x0475A4F0, TextReader_Synchronized__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02385590, void, cctor, ())
} // namespace app::classes::System::IO::TextReader
