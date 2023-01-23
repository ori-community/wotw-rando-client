#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Vector3_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Vector3_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Vector2_Boolean_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_ * this_ptr, app::IEnumerable_1_UnityEngine_Vector3_* source, app::Func_2_UnityEngine_Vector3_Boolean_* predicate, app::Func_2_UnityEngine_Vector3_UnityEngine_Vector2_* selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_UnityEngine_Vector2_*, Clone, (app::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A2F0, void, Dispose, (app::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A3B0, bool, MoveNext, (app::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02896570, app::IEnumerable_1_UnityEngine_Vector2_*, Where, (app::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_ * this_ptr, app::Func_2_UnityEngine_Vector2_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Vector3_UnityEngine_Vector2_
