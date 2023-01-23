#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_RuntimeGameWorldArea_.h>
#include <Modloader/app/structs/List_1_RuntimeGameWorldArea_.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/Predicate_1_RuntimeGameWorldArea_.h>

namespace app::classes::System::Collections::Generic::List_1_RuntimeGameWorldArea_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_RuntimeGameWorldArea_, GetEnumerator, (app::List_1_RuntimeGameWorldArea_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754D40, List_1_RuntimeGameWorldArea__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::RuntimeGameWorldArea*, get_Item, (app::List_1_RuntimeGameWorldArea_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472C2C8, List_1_RuntimeGameWorldArea__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_RuntimeGameWorldArea_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047629D0, List_1_RuntimeGameWorldArea__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_RuntimeGameWorldArea_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04746490, List_1_RuntimeGameWorldArea__set_Capacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_RuntimeGameWorldArea_ * this_ptr, app::RuntimeGameWorldArea* item))
    IL2CPP_REGISTER_METHODINFO(0x0473F208, List_1_RuntimeGameWorldArea__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (app::List_1_RuntimeGameWorldArea_ * this_ptr, app::Predicate_1_RuntimeGameWorldArea_* match))
    IL2CPP_REGISTER_METHODINFO(0x04745D10, List_1_RuntimeGameWorldArea__FindIndex__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_RuntimeGameWorldArea_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478E758, List_1_RuntimeGameWorldArea___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_RuntimeGameWorldArea_
