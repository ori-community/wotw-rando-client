#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Unity::IO::Compression::GZipDecoder {
    IL2CPP_REGISTER_METHOD(0x02B781E0, void, ctor, (app::GZipDecoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B781E0, void, Reset, (app::GZipDecoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B78200, bool, ReadHeader, (app::GZipDecoder * this_ptr, app::InputBuffer * input))
    IL2CPP_REGISTER_METHODINFO(0x047266D0, GZipDecoder_ReadHeader__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02B78700, bool, ReadFooter, (app::GZipDecoder * this_ptr, app::InputBuffer * input))
    IL2CPP_REGISTER_METHOD(0x02B78820, void, UpdateWithBytesRead, (app::GZipDecoder * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t copied))
    IL2CPP_REGISTER_METHOD(0x02B78930, void, Validate, (app::GZipDecoder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732740, GZipDecoder_Validate__MethodInfo)
}
