#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_ByteEnum___Boxed.h>
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/HashSet_1_System_ByteEnum_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(0x0021FEB0, void, ctor, (app::HashSet_1_T_Enumerator_System_ByteEnum___Boxed * this_ptr, app::HashSet_1_System_ByteEnum_* set))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::HashSet_1_T_Enumerator_System_ByteEnum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021FEE0, bool, MoveNext, (app::HashSet_1_T_Enumerator_System_ByteEnum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00113140, app::ByteEnum__Enum, get_Current, (app::HashSet_1_T_Enumerator_System_ByteEnum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021FEF0, app::Object*, IEnumerator_get_Current, (app::HashSet_1_T_Enumerator_System_ByteEnum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00220030, void, IEnumerator_Reset, (app::HashSet_1_T_Enumerator_System_ByteEnum___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_ByteEnum_
