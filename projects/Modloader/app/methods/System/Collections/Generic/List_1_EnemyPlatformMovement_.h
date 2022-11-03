#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_EnemyPlatformMovement_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_EnemyPlatformMovement_ * this_ptr, app::EnemyPlatformMovement* item))
    IL2CPP_REGISTER_METHODINFO(0x04730220, List_1_EnemyPlatformMovement__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_EnemyPlatformMovement_ * this_ptr, app::EnemyPlatformMovement* item))
    IL2CPP_REGISTER_METHODINFO(0x0478FEA0, List_1_EnemyPlatformMovement__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_EnemyPlatformMovement_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771820, List_1_EnemyPlatformMovement__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::EnemyPlatformMovement*, get_Item, (app::List_1_EnemyPlatformMovement_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04761560, List_1_EnemyPlatformMovement__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_EnemyPlatformMovement_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04746518, List_1_EnemyPlatformMovement__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_EnemyPlatformMovement_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04712F10, List_1_EnemyPlatformMovement___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_EnemyPlatformMovement_
