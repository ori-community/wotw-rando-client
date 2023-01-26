#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Reflection_MethodInfo_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Reflection_MethodInfo_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_Reflection_MethodInfo_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_System_Reflection_MethodInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Reflection_MethodInfo_ * this_ptr, app::MethodInfo_1* item))
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (app::List_1_System_Reflection_MethodInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Reflection_MethodInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Reflection_MethodInfo_, GetEnumerator, (app::List_1_System_Reflection_MethodInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_System_Reflection_MethodInfo_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo, (app::List_1_System_Reflection_MethodInfo_ * this_ptr, app::MethodInfo_1__Array* array))
} // namespace app::classes::System::Collections::Generic::List_1_System_Reflection_MethodInfo_
