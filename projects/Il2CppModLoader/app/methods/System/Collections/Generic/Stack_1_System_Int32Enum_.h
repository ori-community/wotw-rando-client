#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Stack_1_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7350, void, ctor_2, (app::Stack_1_System_Int32Enum_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x047224F8, Stack_1_System_Int32Enum___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7480, app::Object *, ICollection_get_SyncRoot, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6CB0, void, Clear, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6CC0, bool, Contains, (app::Stack_1_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum item))
    IL2CPP_REGISTER_METHOD(0x02CF75E0, void, ICollection_CopyTo, (app::Stack_1_System_Int32Enum_ * this_ptr, app::Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHODINFO(0x0475FB18, Stack_1_System_Int32Enum__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF6FB0, app::Stack_1_T_Enumerator_System_Int32Enum_, GetEnumerator, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6FF0, app::IEnumerator_1_System_Int32Enum_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6FF0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7080, app::Int32Enum__Enum, Peek, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF70E0, app::Int32Enum__Enum, Pop, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7150, void, Push, (app::Stack_1_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum item))
    IL2CPP_REGISTER_METHOD(0x02CF7210, app::Int32Enum__Enum__Array *, ToArray, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7880, void, ThrowForEmptyStack, (app::Stack_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476E778, Stack_1_System_Int32Enum__ThrowForEmptyStack__MethodInfo)
}
