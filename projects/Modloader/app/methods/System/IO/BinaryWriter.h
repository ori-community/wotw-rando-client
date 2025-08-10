#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::BinaryWriter {
    IL2CPP_REGISTER_METHOD(0x01DFF690, void, ctor_1, app::BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFF850, void, ctor_2, app::BinaryWriter* this_ptr, app::Stream* output)
    IL2CPP_REGISTER_METHOD(0x01DFF9C0, void, ctor_3, app::BinaryWriter* this_ptr, app::Stream* output, app::Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x01DFF9E0, void, ctor_4, app::BinaryWriter* this_ptr, app::Stream* output, app::Encoding* encoding, bool leave_open)
    IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Close, app::BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFFB80, void, Dispose_1, app::BinaryWriter* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Dispose_2, app::BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFFBE0, app::Stream*, get_BaseStream, app::BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFFC10, void, Flush, app::BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFFC40, int64_t, Seek, app::BinaryWriter* this_ptr, int32_t offset, app::SeekOrigin__Enum origin)
    IL2CPP_REGISTER_METHOD(0x01DFFC70, void, Write_1, app::BinaryWriter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01DFFCE0, void, Write_2, app::BinaryWriter* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01DFFCE0, void, Write_3, app::BinaryWriter* this_ptr, int8_t value)
    IL2CPP_REGISTER_METHOD(0x01DFFD10, void, Write_4, app::BinaryWriter* this_ptr, app::Byte__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x01DFFE00, void, Write_5, app::BinaryWriter* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01DFFE30, void, Write_6, app::BinaryWriter* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x01DFFFC0, void, Write_7, app::BinaryWriter* this_ptr, app::Char__Array* chars)
    IL2CPP_REGISTER_METHOD(0x01E000E0, void, Write_8, app::BinaryWriter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x01E00140, void, Write_9, app::BinaryWriter* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x01E001E0, void, Write_10, app::BinaryWriter* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x01E00280, void, Write_11, app::BinaryWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01E00390, void, Write_12, app::BinaryWriter* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x01E004A0, void, Write_13, app::BinaryWriter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01E006B0, void, Write_14, app::BinaryWriter* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x01E008C0, void, Write_15, app::BinaryWriter* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01E00920, void, Write_16, app::BinaryWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E00C90, void, Write7BitEncodedInt, app::BinaryWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01E00D00, void, cctor, )
} // namespace app::classes::System::IO::BinaryWriter
