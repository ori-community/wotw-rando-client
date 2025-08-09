#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Reflection_MethodBase_.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/MethodBase__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_Reflection_MethodBase_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_System_Reflection_MethodBase_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Reflection_MethodBase_* this_ptr, app::MethodBase* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Reflection_MethodBase_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo, app::List_1_System_Reflection_MethodBase_* this_ptr, app::MethodBase__Array* array)
} // namespace app::classes::System::Collections::Generic::List_1_System_Reflection_MethodBase_
