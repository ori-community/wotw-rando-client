#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CsvReader_Cell.h>
#include <Modloader/app/structs/CsvReader_ReadToEnd_d_11.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_CsvReader_Cell_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::CsvReader__ReadToEnd_d__11 {
    IL2CPP_REGISTER_METHOD(0x01426B00, void, ctor, app::CsvReader_ReadToEnd_d_11* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::CsvReader_ReadToEnd_d_11* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030EA860, bool, MoveNext, app::CsvReader_ReadToEnd_d_11* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00C3DD30,
        app::CsvReader_Cell,
        System_Collections_Generic_IEnumerator_Moon_CsvReader_Cell__get_Current,
        app::CsvReader_ReadToEnd_d_11* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x030EA980, void, IEnumerator_Reset, app::CsvReader_ReadToEnd_d_11* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030EA9D0, app::Object*, IEnumerator_get_Current, app::CsvReader_ReadToEnd_d_11* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x030EAA60,
        app::IEnumerator_1_Moon_CsvReader_Cell_*,
        System_Collections_Generic_IEnumerable_Moon_CsvReader_Cell__GetEnumerator,
        app::CsvReader_ReadToEnd_d_11* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x030EAC50, app::IEnumerator*, IEnumerable_GetEnumerator, app::CsvReader_ReadToEnd_d_11* this_ptr)
} // namespace app::classes::Moon::CsvReader__ReadToEnd_d__11
