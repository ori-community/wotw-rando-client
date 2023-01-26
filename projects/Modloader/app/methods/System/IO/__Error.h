#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::__Error {
    IL2CPP_REGISTER_METHOD(0x0238B580, void, EndOfFile, ())
    IL2CPP_REGISTER_METHOD(0x0238B5F0, void, FileNotOpen, ())
    IL2CPP_REGISTER_METHOD(0x0238B660, void, StreamIsClosed, ())
    IL2CPP_REGISTER_METHOD(0x0238B6D0, void, MemoryStreamNotExpandable, ())
    IL2CPP_REGISTER_METHOD(0x0238B740, void, ReaderClosed, ())
    IL2CPP_REGISTER_METHOD(0x0238B7B0, void, ReadNotSupported, ())
    IL2CPP_REGISTER_METHOD(0x0238B820, void, WrongAsyncResult, ())
    IL2CPP_REGISTER_METHOD(0x0238B890, void, EndReadCalledTwice, ())
    IL2CPP_REGISTER_METHOD(0x0238B900, void, EndWriteCalledTwice, ())
    IL2CPP_REGISTER_METHOD(0x0238B970, app::String*, GetDisplayablePath, (app::String * path, bool is_invalid_path))
    IL2CPP_REGISTER_METHOD(0x0238BAC0, void, WinIOError, (int32_t error_code, app::String* maybe_full_path))
    IL2CPP_REGISTER_METHOD(0x0238C1E0, void, WriteNotSupported, ())
    IL2CPP_REGISTER_METHOD(0x0238C250, void, WriterClosed, ())
} // namespace app::classes::System::IO::__Error
