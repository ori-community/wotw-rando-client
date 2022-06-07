#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereSelectListIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectListIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_ * this_ptr, app::List_1_UnityEngine_Vector3_ * source, app::Func_2_UnityEngine_Vector3_Boolean_ * predicate, app::Func_2_UnityEngine_Vector3_UnityEngine_Vector2_ * selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_UnityEngine_Vector2_ *, Clone, (app::Enumerable_WhereSelectListIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289BF20, bool, MoveNext, (app::Enumerable_WhereSelectListIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A7C0, app::IEnumerable_1_UnityEngine_Vector2_ *, Where, (app::Enumerable_WhereSelectListIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_ * this_ptr, app::Func_2_UnityEngine_Vector2_Boolean_ * predicate))
}
