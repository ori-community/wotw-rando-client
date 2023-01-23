#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_TentacleEnemy_Joint_.h>
#include <Modloader/app/structs/TentacleEnemy_Joint.h>

namespace app::classes::System::Collections::Generic::List_1_TentacleEnemy_Joint_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_TentacleEnemy_Joint_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474F218, List_1_TentacleEnemy_Joint__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::TentacleEnemy_Joint*, get_Item, (app::List_1_TentacleEnemy_Joint_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04764698, List_1_TentacleEnemy_Joint__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_TentacleEnemy_Joint_ * this_ptr, app::TentacleEnemy_Joint* item))
    IL2CPP_REGISTER_METHODINFO(0x0472E698, List_1_TentacleEnemy_Joint__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_TentacleEnemy_Joint_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780808, List_1_TentacleEnemy_Joint___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_TentacleEnemy_Joint_
