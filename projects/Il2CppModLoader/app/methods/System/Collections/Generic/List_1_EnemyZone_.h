#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_EnemyZone_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::EnemyZone *, get_Item, (app::List_1_EnemyZone_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04771318, List_1_EnemyZone__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_EnemyZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BD70, List_1_EnemyZone__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_EnemyZone_ * this_ptr, app::EnemyZone * item))
    IL2CPP_REGISTER_METHODINFO(0x04797938, List_1_EnemyZone__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_EnemyZone_ * this_ptr, app::EnemyZone * item))
    IL2CPP_REGISTER_METHODINFO(0x04726DA8, List_1_EnemyZone__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_EnemyZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047491C0, List_1_EnemyZone___ctor__MethodInfo)
}
