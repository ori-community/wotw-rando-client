#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::System::Collections::Generic::Stack_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFA150, void, Push, (app::Stack_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item))
    IL2CPP_REGISTER_METHOD(0x02CFA230, app::Vector3__Array*, ToArray, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFA0C0, app::Vector3, Pop, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF99E0, void, ctor_2, (app::Stack_1_UnityEngine_Vector3_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF9B10, app::Object*, ICollection_get_SyncRoot, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6CB0, void, Clear, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF9C70, bool, Contains, (app::Stack_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item))
    IL2CPP_REGISTER_METHOD(0x02CF9CD0, void, ICollection_CopyTo, (app::Stack_1_UnityEngine_Vector3_ * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02CF9F70, app::Stack_1_T_Enumerator_UnityEngine_Vector3_, GetEnumerator, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF9FB0, app::IEnumerator_1_UnityEngine_Vector3_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF9FB0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFA040, app::Vector3, Peek, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFA340, void, ThrowForEmptyStack, (app::Stack_1_UnityEngine_Vector3_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Stack_1_UnityEngine_Vector3_
