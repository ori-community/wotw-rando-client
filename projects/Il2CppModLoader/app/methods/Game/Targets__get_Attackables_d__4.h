#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Game::Targets__get_Attackables_d__4 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::Targets_get_Attackables_d_4 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x00684820, void, IDisposable_Dispose, (app::Targets_get_Attackables_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00684860, bool, MoveNext, (app::Targets_get_Attackables_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00684AB0, void, __m__Finally1, (app::Targets_get_Attackables_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IAttackable *, IEnumerator_IAttackable__get_Current, (app::Targets_get_Attackables_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00684C60, void, IEnumerator_Reset, (app::Targets_get_Attackables_d_4 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707268, Targets_get_Attackables_d_4_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object *, IEnumerator_get_Current, (app::Targets_get_Attackables_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00684CB0, app::IEnumerator_1_IAttackable_ *, IEnumerable_IAttackable__GetEnumerator, (app::Targets_get_Attackables_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00684E90, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Targets_get_Attackables_d_4 * this_ptr))
}
