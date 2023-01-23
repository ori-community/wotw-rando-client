#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/List_1_System_Int64_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Int64___ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Int64__Array*, get_Item, (app::List_1_System_Int64_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474B358, List_1_System_Int64__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Int64_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473DF28, List_1_System_Int64__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Int64_ * this_ptr, app::Int64__Array* item))
    IL2CPP_REGISTER_METHODINFO(0x04764618, List_1_System_Int64__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Int64_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047138B0, List_1_System_Int64___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_System_Int64___
