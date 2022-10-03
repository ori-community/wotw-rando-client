#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::OutputWriter {
    IL2CPP_REGISTER_METHOD(0x00442420, void, ctor, (app::OutputWriter * this_ptr, app::String* folder, app::String* output_file_name))
    IL2CPP_REGISTER_METHOD(0x004427E0, void, WriteLines, (app::OutputWriter * this_ptr, app::String__Array* lines))
    IL2CPP_REGISTER_METHOD(0x00442880, void, FlushStreamWriter, (app::OutputWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004428B0, void, Write, (app::OutputWriter * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x00442900, void, WriteBuffer, (app::OutputWriter * this_ptr, int32_t size))
    IL2CPP_REGISTER_METHOD(0x00442880, void, Flush, (app::OutputWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00442A10, void, Close, (app::OutputWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, GetOutputPath, (app::OutputWriter * this_ptr))
} // namespace app::classes::OutputWriter
