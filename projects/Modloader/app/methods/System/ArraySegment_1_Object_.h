#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArraySegment_1_Object_.h>
#include <Modloader/app/structs/ArraySegment_1_Object___Boxed.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::ArraySegment_1_Object_ {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object__Array*, get_Array, app::ArraySegment_1_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_Offset, app::ArraySegment_1_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001155B0, int32_t, get_Count, app::ArraySegment_1_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00222470, app::Object*, System_Collections_Generic_IList_T__get_Item, app::ArraySegment_1_Object___Boxed* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x002225A0,
        void,
        System_Collections_Generic_IList_T__set_Item,
        app::ArraySegment_1_Object___Boxed* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x00222850,
        app::Object*,
        System_Collections_Generic_IReadOnlyList_T__get_Item,
        app::ArraySegment_1_Object___Boxed* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00221FF0, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, app::ArraySegment_1_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002222B0, void, ctor, app::ArraySegment_1_Object___Boxed* this_ptr, app::Object__Array* array, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00221950, int32_t, GetHashCode, app::ArraySegment_1_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00221990, bool, Equals_1, app::ArraySegment_1_Object___Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x00221AA0, bool, Equals_2, app::ArraySegment_1_Object___Boxed* this_ptr, app::ArraySegment_1_Object_ obj)
    IL2CPP_REGISTER_METHOD(0x002226D0, int32_t, System_Collections_Generic_IList_T__IndexOf, app::ArraySegment_1_Object___Boxed* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x00222830,
        void,
        System_Collections_Generic_IList_T__Insert,
        app::ArraySegment_1_Object___Boxed* this_ptr,
        int32_t index,
        app::Object* item
    )
    IL2CPP_REGISTER_METHOD(0x00222840, void, System_Collections_Generic_IList_T__RemoveAt, app::ArraySegment_1_Object___Boxed* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00222980, void, System_Collections_Generic_ICollection_T__Add, app::ArraySegment_1_Object___Boxed* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x00222990, void, System_Collections_Generic_ICollection_T__Clear, app::ArraySegment_1_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002229A0,
        bool,
        System_Collections_Generic_ICollection_T__Contains,
        app::ArraySegment_1_Object___Boxed* this_ptr,
        app::Object* item
    )
    IL2CPP_REGISTER_METHOD(
        0x00222B00,
        void,
        System_Collections_Generic_ICollection_T__CopyTo,
        app::ArraySegment_1_Object___Boxed* this_ptr,
        app::Object__Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x00222C00, bool, System_Collections_Generic_ICollection_T__Remove, app::ArraySegment_1_Object___Boxed* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x00222C10,
        app::IEnumerator_1_System_Object_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::ArraySegment_1_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00222C20, app::IEnumerator*, IEnumerable_GetEnumerator, app::ArraySegment_1_Object___Boxed* this_ptr)
} // namespace app::classes::System::ArraySegment_1_Object_
