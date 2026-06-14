#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FastHashSet_1_System_Object_.h>
#include <Modloader/app/structs/FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Motvin::Collections::FastHashSet_1_T__FastHashSetEnumerator_1_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02AF7E80, app::Object*, get_Current, app::FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AF7F70, app::Object**, get_CurrentRef, app::FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AF8110, bool, get_IsCurrentValid, app::FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0298B8E0,
        app::Object*,
        IEnumerator_get_Current,
        app::FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF7D00,
        void,
        ctor,
        app::FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object_* this_ptr,
        app::FastHashSet_1_System_Object_* set
    )
    IL2CPP_REGISTER_METHOD(0x02AF7D50, bool, MoveNext, app::FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AF7E40, void, Reset, app::FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object_* this_ptr)
} // namespace app::classes::Motvin::Collections::FastHashSet_1_T__FastHashSetEnumerator_1_System_Object_System_Object_
