#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_LinearPath_.h>
#include <Modloader/app/structs/LinearPath.h>

namespace app::classes::System::Collections::Generic::List_1_LinearPath_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_LinearPath_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729150, List_1_LinearPath__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_LinearPath_ * this_ptr, app::LinearPath* item))
    IL2CPP_REGISTER_METHODINFO(0x0474CD40, List_1_LinearPath__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LinearPath*, get_Item, (app::List_1_LinearPath_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0478A3A0, List_1_LinearPath__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_LinearPath_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A6C8, List_1_LinearPath__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_LinearPath_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047515E0, List_1_LinearPath___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_LinearPath_
