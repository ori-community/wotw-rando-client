#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::IO::UnexceptionalStreamWriter {
    IL2CPP_REGISTER_METHOD(0x02389090, void, ctor, (app::UnexceptionalStreamWriter * this_ptr, app::Stream* stream, app::Encoding* encoding))
    IL2CPP_REGISTER_METHOD(0x02389160, void, Flush, (app::UnexceptionalStreamWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02389210, void, Write_1, (app::UnexceptionalStreamWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x023892D0, void, Write_2, (app::UnexceptionalStreamWriter * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x02389370, void, Write_3, (app::UnexceptionalStreamWriter * this_ptr, app::Char__Array* value))
    IL2CPP_REGISTER_METHOD(0x023894A0, void, Write_4, (app::UnexceptionalStreamWriter * this_ptr, app::String* value))
} // namespace app::classes::System::IO::UnexceptionalStreamWriter
