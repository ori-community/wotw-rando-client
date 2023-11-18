#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack_1_System_Int32Enum_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Int32Enum_.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Int32Enum__Enum__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_System_Int32Enum_.h>

namespace app::classes::System::Collections::Generic::Stack_1_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7350, void, ctor_2, (app::Stack_1_System_Int32Enum_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7480, app::Object*, ICollection_get_SyncRoot, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6CB0, void, Clear, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6CC0, bool, Contains, (app::Stack_1_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum item))
    IL2CPP_REGISTER_METHOD(0x02CF75E0, void, ICollection_CopyTo, (app::Stack_1_System_Int32Enum_ * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02CF6FB0, app::Stack_1_T_Enumerator_System_Int32Enum_, GetEnumerator, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6FF0, app::IEnumerator_1_System_Int32Enum_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6FF0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7080, app::Int32Enum__Enum, Peek, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF70E0, app::Int32Enum__Enum, Pop, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7150, void, Push, (app::Stack_1_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum item))
    IL2CPP_REGISTER_METHOD(0x02CF7210, app::Int32Enum__Enum__Array*, ToArray, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7880, void, ThrowForEmptyStack, (app::Stack_1_System_Int32Enum_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Stack_1_System_Int32Enum_
