#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::CsvReader {
    IL2CPP_REGISTER_METHOD(0x030E8D60, void, ctor, (app::CsvReader * this_ptr, app::TextReader* reader, bool should_dispose_reader))
    IL2CPP_REGISTER_METHODINFO(0x04789CE8, CsvReader__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030E8F00, app::IEnumerable_1_Moon_CsvReader_Cell_*, ReadRow, (app::CsvReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030E9090, app::IEnumerable_1_Moon_CsvReader_Cell_*, ReadToEnd, (app::CsvReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030E9220, bool, TryPeak, (app::CsvReader * this_ptr, app::CsvReader_Cell* cell))
    IL2CPP_REGISTER_METHOD(0x030E9330, bool, TryRead, (app::CsvReader * this_ptr, app::CsvReader_Cell* cell))
    IL2CPP_REGISTER_METHOD(0x030E9410, bool, TryReadImpl, (app::CsvReader * this_ptr, app::CsvReader_Cell* cell))
    IL2CPP_REGISTER_METHOD(0x030E96A0, app::CsvReader_Cell, ReadQuotedCell, (app::CsvReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477AF38, CsvReader_ReadQuotedCell__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030E9E80, void, EnsureNextCharIsLf, (app::CsvReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D628, CsvReader_EnsureNextCharIsLf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030EA000, app::CsvReader_Cell, ReadUnquotedCell, (app::CsvReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EA3D0, void, TrimSbEnd, (app::CsvReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EA470, void, Dispose, (app::CsvReader * this_ptr))
} // namespace app::classes::Moon::CsvReader
