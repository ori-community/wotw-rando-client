#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::BitConverter {
    IL2CPP_REGISTER_METHOD(0x0229C490, bool, AmILittleEndian, ())
    IL2CPP_REGISTER_METHOD(0x0229C4B0, app::Byte__Array*, GetBytes_1, (bool value))
    IL2CPP_REGISTER_METHOD(0x0229C560, app::Byte__Array*, GetBytes_2, (uint16_t value))
    IL2CPP_REGISTER_METHOD(0x0229C600, app::Byte__Array*, GetBytes_3, (int16_t value))
    IL2CPP_REGISTER_METHOD(0x0229C6A0, app::Byte__Array*, GetBytes_4, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x0229C740, app::Byte__Array*, GetBytes_5, (int64_t value))
    IL2CPP_REGISTER_METHOD(0x0229C7E0, app::Byte__Array*, GetBytes_6, (uint16_t value))
    IL2CPP_REGISTER_METHOD(0x0229C880, app::Byte__Array*, GetBytes_7, (uint32_t value))
    IL2CPP_REGISTER_METHOD(0x0229C920, app::Byte__Array*, GetBytes_8, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0229C9C0, app::Byte__Array*, GetBytes_9, (float value))
    IL2CPP_REGISTER_METHOD(0x0229CA60, app::Byte__Array*, GetBytes_10, (double value))
    IL2CPP_REGISTER_METHOD(0x0229CB00, int16_t, ToInt16, (app::Byte__Array * value, int32_t start_index))
    IL2CPP_REGISTER_METHOD(0x0229CC60, int32_t, ToInt32, (app::Byte__Array * value, int32_t start_index))
    IL2CPP_REGISTER_METHOD(0x0229CDF0, int64_t, ToInt64, (app::Byte__Array * value, int32_t start_index))
    IL2CPP_REGISTER_METHOD(0x0229CFE0, uint16_t, ToUInt16, (app::Byte__Array * value, int32_t start_index))
    IL2CPP_REGISTER_METHOD(0x0229D0D0, uint32_t, ToUInt32, (app::Byte__Array * value, int32_t start_index))
    IL2CPP_REGISTER_METHOD(0x0229D1C0, uint64_t, ToUInt64, (app::Byte__Array * value, int32_t start_index))
    IL2CPP_REGISTER_METHOD(0x0229D2B0, float, ToSingle, (app::Byte__Array * value, int32_t start_index))
    IL2CPP_REGISTER_METHOD(0x0229D3A0, uint16_t, GetHexValue, (int32_t i))
    IL2CPP_REGISTER_METHOD(0x0229D3B0, app::String*, ToString_1, (app::Byte__Array * value, int32_t start_index, int32_t length))
    IL2CPP_REGISTER_METHODINFO(0x04789CF0, BitConverter_ToString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229D790, app::String*, ToString_2, (app::Byte__Array * value))
    IL2CPP_REGISTER_METHODINFO(0x04779B30, BitConverter_ToString_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229D870, bool, ToBoolean, (app::Byte__Array * value, int32_t start_index))
    IL2CPP_REGISTER_METHODINFO(0x047693A8, BitConverter_ToBoolean__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01969710, int64_t, DoubleToInt64Bits, (double value))
    IL2CPP_REGISTER_METHOD(0x0229D9F0, double, Int64BitsToDouble, (int64_t value))
    IL2CPP_REGISTER_METHOD(0x0229DA00, void, cctor, ())
} // namespace app::classes::System::BitConverter
