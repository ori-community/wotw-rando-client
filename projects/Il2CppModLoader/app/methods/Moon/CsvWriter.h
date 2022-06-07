#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::CsvWriter {
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor, (app::CsvWriter * this_ptr, app::TextWriter * writer, bool should_dispose_writer))
    IL2CPP_REGISTER_METHOD(0x030EAC60, void, FinishRow, (app::CsvWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00442880, void, Flush, (app::CsvWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_NextColumn, (app::CsvWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_NextRow, (app::CsvWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EACA0, void, WriteString_1, (app::CsvWriter * this_ptr, app::String * str))
    IL2CPP_REGISTER_METHOD(0x030EACD0, void, WriteString_2, (app::CsvWriter * this_ptr, app::String * str, int32_t start, int32_t length))
    IL2CPP_REGISTER_METHODINFO(0x04724188, CsvWriter_WriteString_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030EAE10, void, WriteSingle, (app::CsvWriter * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x030EAE90, void, WriteDouble, (app::CsvWriter * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x030EAF10, void, WriteDecimal, (app::CsvWriter * this_ptr, app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x030EAF90, void, WriteU8, (app::CsvWriter * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x030EB010, void, WriteU16, (app::CsvWriter * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x030EB080, void, WriteU32, (app::CsvWriter * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x030EB0F0, void, WriteU64, (app::CsvWriter * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x030EB160, void, WriteI8, (app::CsvWriter * this_ptr, int8_t value))
    IL2CPP_REGISTER_METHOD(0x030EB1E0, void, WriteI16, (app::CsvWriter * this_ptr, int16_t value))
    IL2CPP_REGISTER_METHOD(0x030EB250, void, WriteI32, (app::CsvWriter * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x030EB2C0, void, WriteI64, (app::CsvWriter * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x030EB330, void, StartWrite, (app::CsvWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EB380, void, WriteStringImpl, (app::CsvWriter * this_ptr, app::String * str, int32_t start, int32_t length))
    IL2CPP_REGISTER_METHOD(0x030EB620, void, Dispose, (app::CsvWriter * this_ptr))
}
