#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Cart_.h>
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Cart_.h>

namespace app::classes::System::Collections::Generic::List_1_Cart_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Cart_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047009A0, List_1_Cart___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Cart_ * this_ptr, app::Cart* item))
    IL2CPP_REGISTER_METHODINFO(0x0478A248, List_1_Cart__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Cart_, GetEnumerator, (app::List_1_Cart_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476AD50, List_1_Cart__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Cart_
