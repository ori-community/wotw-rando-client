#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TextWriter_NullTextWriter.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::TextWriter_NullTextWriter {
    IL2CPP_REGISTER_METHOD(0x023881E0, void, ctor, (app::TextWriter_NullTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023882B0, app::Encoding*, get_Encoding, (app::TextWriter_NullTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Write_1, (app::TextWriter_NullTextWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Write_2, (app::TextWriter_NullTextWriter * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteLine_1, (app::TextWriter_NullTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteLine_2, (app::TextWriter_NullTextWriter * this_ptr, app::String* value))
} // namespace app::classes::System::IO::TextWriter_NullTextWriter
