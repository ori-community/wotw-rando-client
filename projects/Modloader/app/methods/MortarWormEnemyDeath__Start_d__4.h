#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MortarWormEnemyDeath_Start_d_4.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::MortarWormEnemyDeath__Start_d__4 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::MortarWormEnemyDeath_Start_d_4 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::MortarWormEnemyDeath_Start_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008634B0, bool, MoveNext, (app::MortarWormEnemyDeath_Start_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::MortarWormEnemyDeath_Start_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863990, void, IEnumerator_Reset, (app::MortarWormEnemyDeath_Start_d_4 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047975F8, MortarWormEnemyDeath_Start_d_4_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::MortarWormEnemyDeath_Start_d_4 * this_ptr))
} // namespace app::classes::MortarWormEnemyDeath__Start_d__4
