#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Stack_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047706E0, Stack_1_System_Single___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789B10, Stack_1_System_Single__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF87A0, float, Peek, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789DF8, Stack_1_System_Single__Peek__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF8230, void, ctor_2, (app::Stack_1_System_Single_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04755600, Stack_1_System_Single___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF8360, app::Object*, ICollection_get_SyncRoot, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6CB0, void, Clear, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF84C0, bool, Contains, (app::Stack_1_System_Single_ * this_ptr, float item))
    IL2CPP_REGISTER_METHOD(0x02CF8500, void, ICollection_CopyTo, (app::Stack_1_System_Single_ * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHODINFO(0x0477DC38, Stack_1_System_Single__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF6FB0, app::Stack_1_T_Enumerator_System_Single_, GetEnumerator, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6FF0, app::IEnumerator_1_System_Single_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6FF0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF8800, float, Pop, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF8870, void, Push, (app::Stack_1_System_Single_ * this_ptr, float item))
    IL2CPP_REGISTER_METHOD(0x02CF7210, app::Single__Array*, ToArray, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF8930, void, ThrowForEmptyStack, (app::Stack_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04714C80, Stack_1_System_Single__ThrowForEmptyStack__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Stack_1_System_Single_
