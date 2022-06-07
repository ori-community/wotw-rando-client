#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_Moon_EnemyEntity_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_EnemyEntity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477E1F0, List_1_Moon_EnemyEntity___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_EnemyEntity_ * this_ptr, app::EnemyEntity * item))
    IL2CPP_REGISTER_METHODINFO(0x047078E8, List_1_Moon_EnemyEntity__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_Moon_EnemyEntity_ * this_ptr, app::EnemyEntity * item))
    IL2CPP_REGISTER_METHODINFO(0x04709EB8, List_1_Moon_EnemyEntity__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::EnemyEntity *, get_Item, (app::List_1_Moon_EnemyEntity_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047507F8, List_1_Moon_EnemyEntity__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_EnemyEntity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476F140, List_1_Moon_EnemyEntity__get_Count__MethodInfo)
}
