#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_GenericPuppet_.h>
#include <Modloader/app/structs/GenericPuppet.h>
#include <Modloader/app/structs/List_1_T_Enumerator_GenericPuppet_.h>

namespace app::classes::System::Collections::Generic::List_1_GenericPuppet_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_GenericPuppet_ * this_ptr, app::GenericPuppet* item))
    IL2CPP_REGISTER_METHODINFO(0x04756E60, List_1_GenericPuppet__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_GenericPuppet_, GetEnumerator, (app::List_1_GenericPuppet_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A670, List_1_GenericPuppet__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_GenericPuppet_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F0A0, List_1_GenericPuppet__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_GenericPuppet_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752F38, List_1_GenericPuppet__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::GenericPuppet*, get_Item, (app::List_1_GenericPuppet_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04784E10, List_1_GenericPuppet__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_GenericPuppet_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761A18, List_1_GenericPuppet___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_GenericPuppet_
