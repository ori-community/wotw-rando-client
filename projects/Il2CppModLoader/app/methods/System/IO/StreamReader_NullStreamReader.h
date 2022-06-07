#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::IO::StreamReader_NullStreamReader {
    IL2CPP_REGISTER_METHOD(0x02381F00, void, ctor, (app::StreamReader_NullStreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02382050, app::Stream *, get_BaseStream, (app::StreamReader_NullStreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023820F0, app::Encoding *, get_CurrentEncoding, (app::StreamReader_NullStreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::StreamReader_NullStreamReader * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, Peek, (app::StreamReader_NullStreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, Read_1, (app::StreamReader_NullStreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, Read_2, (app::StreamReader_NullStreamReader * this_ptr, app::Char__Array * buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String *, ReadLine, (app::StreamReader_NullStreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02382100, app::String *, ReadToEnd, (app::StreamReader_NullStreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, ReadBuffer, (app::StreamReader_NullStreamReader * this_ptr))
}
