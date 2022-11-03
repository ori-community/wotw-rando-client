#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::IO::TextReader_SyncTextReader {
    IL2CPP_REGISTER_METHOD(0x02385D50, void, ctor, (app::TextReader_SyncTextReader * this_ptr, app::TextReader* t))
    IL2CPP_REGISTER_METHOD(0x01F3EDB0, void, Close, (app::TextReader_SyncTextReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02385E00, void, Dispose, (app::TextReader_SyncTextReader * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02287F30, int32_t, Peek, (app::TextReader_SyncTextReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3EE40, int32_t, Read_1, (app::TextReader_SyncTextReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02385EA0, int32_t, Read_2, (app::TextReader_SyncTextReader * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01F3EED0, app::String*, ReadLine, (app::TextReader_SyncTextReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02385ED0, app::String*, ReadToEnd, (app::TextReader_SyncTextReader * this_ptr))
} // namespace app::classes::System::IO::TextReader_SyncTextReader
