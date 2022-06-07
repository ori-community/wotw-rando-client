#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Unity::IO::Compression::GZipFormatter {
    IL2CPP_REGISTER_METHOD(0x02B78A40, void, ctor_1, (app::GZipFormatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B78AF0, void, ctor_2, (app::GZipFormatter * this_ptr, int32_t compression_level))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Byte__Array *, GetHeader, (app::GZipFormatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B78BD0, void, UpdateWithBytesRead, (app::GZipFormatter * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t bytes_to_copy))
    IL2CPP_REGISTER_METHOD(0x02B78CE0, app::Byte__Array *, GetFooter, (app::GZipFormatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B78DB0, void, WriteUInt32, (app::GZipFormatter * this_ptr, app::Byte__Array * b, uint32_t value, int32_t start_index))
}
