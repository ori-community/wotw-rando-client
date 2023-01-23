#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_EnemyArenaController_EnemyWave_.h>
#include <Modloader/app/structs/EnemyArenaController_EnemyWave.h>

namespace app::classes::System::Collections::Generic::List_1_EnemyArenaController_EnemyWave_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_EnemyArenaController_EnemyWave_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047313B0, List_1_EnemyArenaController_EnemyWave__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::EnemyArenaController_EnemyWave*, get_Item, (app::List_1_EnemyArenaController_EnemyWave_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04792070, List_1_EnemyArenaController_EnemyWave__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_EnemyArenaController_EnemyWave_ * this_ptr, app::EnemyArenaController_EnemyWave* item))
    IL2CPP_REGISTER_METHODINFO(0x04750370, List_1_EnemyArenaController_EnemyWave__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_EnemyArenaController_EnemyWave_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04726F80, List_1_EnemyArenaController_EnemyWave__RemoveAt__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_EnemyArenaController_EnemyWave_
