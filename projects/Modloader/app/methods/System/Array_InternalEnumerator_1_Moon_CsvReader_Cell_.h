#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_Moon_CsvReader_Cell___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/CsvReader_Cell.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_Moon_CsvReader_Cell_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_Moon_CsvReader_Cell___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_Moon_CsvReader_Cell___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_Moon_CsvReader_Cell___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00164410, app::CsvReader_Cell, get_Current, (app::Array_InternalEnumerator_1_Moon_CsvReader_Cell___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774400, Array_InternalEnumerator_1_Moon_CsvReader_Cell__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_Moon_CsvReader_Cell___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00164440, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_Moon_CsvReader_Cell___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_Moon_CsvReader_Cell_
