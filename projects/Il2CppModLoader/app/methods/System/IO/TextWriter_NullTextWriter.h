#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::IO::TextWriter_NullTextWriter {
    IL2CPP_REGISTER_METHOD(0x023881E0, void, ctor, (app::TextWriter_NullTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023882B0, app::Encoding *, get_Encoding, (app::TextWriter_NullTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Write_1, (app::TextWriter_NullTextWriter * this_ptr, app::Char__Array * buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Write_2, (app::TextWriter_NullTextWriter * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteLine_1, (app::TextWriter_NullTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteLine_2, (app::TextWriter_NullTextWriter * this_ptr, app::String * value))
}
