#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Unity::IO::Compression::DeflaterManaged {
    IL2CPP_REGISTER_METHOD(0x02B756F0, void, ctor, (app::DeflaterManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B75A80, bool, NeedsInput, (app::DeflaterManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B75B10, bool, IDeflater_NeedsInput, (app::DeflaterManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B75B60, void, IDeflater_SetInput, (app::DeflaterManaged * this_ptr, app::Byte__Array * input_buffer, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B75BE0, int32_t, IDeflater_GetDeflateOutput, (app::DeflaterManaged * this_ptr, app::Byte__Array * output_buffer))
    IL2CPP_REGISTER_METHOD(0x02B760D0, bool, IDeflater_Finish, (app::DeflaterManaged * this_ptr, app::Byte__Array * output_buffer, int32_t * bytes_read))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::DeflaterManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::DeflaterManaged * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02B76190, bool, UseCompressed, (app::DeflaterManaged * this_ptr, double ratio))
    IL2CPP_REGISTER_METHOD(0x02B761A0, void, FlushInputWindows, (app::DeflaterManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B761D0, void, WriteFinal, (app::DeflaterManaged * this_ptr))
}
