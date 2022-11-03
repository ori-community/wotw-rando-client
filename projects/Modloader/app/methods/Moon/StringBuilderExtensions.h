#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::StringBuilderExtensions {
    IL2CPP_REGISTER_METHOD(0x030F27E0, void, AppendGuid, (app::StringBuilder * sb, app::Guid value))
    IL2CPP_REGISTER_METHOD(0x030F2810, void, AppendByteAsHex, (app::StringBuilder * sb, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x030F2890, uint16_t, GetNibble, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x030F28B0, void, AppendI32, (app::StringBuilder * sb, int32_t value))
    IL2CPP_REGISTER_METHOD(0x030F2900, void, AppendI64, (app::StringBuilder * sb, int64_t value))
    IL2CPP_REGISTER_METHOD(0x030F2950, void, AppendU8, (app::StringBuilder * sb, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x030F2B40, void, AppendU16, (app::StringBuilder * sb, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x030F2D30, void, AppendU32, (app::StringBuilder * sb, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x030F2F30, void, AppendU64, (app::StringBuilder * sb, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x030F3140, void, AppendF32, (app::StringBuilder * sb, float value, bool skip_if_zero))
    IL2CPP_REGISTER_METHOD(0x030F3390, void, AppendF64, (app::StringBuilder * sb, double value, bool skip_if_zero))
} // namespace app::classes::Moon::StringBuilderExtensions
