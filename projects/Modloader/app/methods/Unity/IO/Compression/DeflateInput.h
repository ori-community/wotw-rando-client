#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DeflateInput.h>
#include <Modloader/app/structs/DeflateInput_InputState.h>

namespace app::classes::Unity::IO::Compression::DeflateInput {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Byte__Array*, get_Buffer, (app::DeflateInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Buffer, (app::DeflateInput * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::DeflateInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Count, (app::DeflateInput * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_StartIndex, (app::DeflateInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_StartIndex, (app::DeflateInput * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02B72110, void, ConsumeBytes, (app::DeflateInput * this_ptr, int32_t n))
    IL2CPP_REGISTER_METHOD(0x02B72120, app::DeflateInput_InputState, DumpState, (app::DeflateInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B72140, void, RestoreState, (app::DeflateInput * this_ptr, app::DeflateInput_InputState state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeflateInput * this_ptr))
} // namespace app::classes::Unity::IO::Compression::DeflateInput
