#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_DateTime_System_Object_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Byte_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_ValueTuple_2_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_DateTime_System_Object_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_Object_System_Byte_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_Object_System_ValueTuple_2_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_DateTime_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_DateTime_System_Object___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Object___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Boolean___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Byte_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Byte___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Int32___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Single___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_ValueTuple_2_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_ValueTuple_2___Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_ {
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::IList_1_KeyValuePair_2_System_DateTime_System_Object_* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_1, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_DateTime_System_Object_,
        get_Item_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B816B0,
        bool,
        Contains_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::KeyValuePair_2_System_DateTime_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::KeyValuePair_2_System_DateTime_System_Object___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_KeyValuePair_2_System_DateTime_System_Object_*,
        GetEnumerator_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B81780,
        int32_t,
        IndexOf_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::KeyValuePair_2_System_DateTime_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_DateTime_System_Object_,
        System_Collections_Generic_IList_T__get_Item_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_DateTime_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::KeyValuePair_2_System_DateTime_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_DateTime_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::KeyValuePair_2_System_DateTime_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02EC4CA0,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_1, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EC4D30, app::Object*, ICollection_get_SyncRoot_1, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02EC4EC0,
        void,
        ICollection_CopyTo_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_1, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_1, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B81E90,
        app::Object*,
        IList_get_Item_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, int32_t, IList_Add_1, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_1, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B81F90, bool, IsCompatibleObject_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B82080,
        bool,
        IList_Contains_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B82160,
        int32_t,
        IList_IndexOf_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_1,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Remove_1, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_1, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::IList_1_KeyValuePair_2_System_Int32_System_Object_* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_2, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Int32_System_Object_,
        get_Item_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B816B0,
        bool,
        Contains_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::KeyValuePair_2_System_Int32_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::KeyValuePair_2_System_Int32_System_Object___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_KeyValuePair_2_System_Int32_System_Object_*,
        GetEnumerator_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B81780,
        int32_t,
        IndexOf_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::KeyValuePair_2_System_Int32_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Int32_System_Object_,
        System_Collections_Generic_IList_T__get_Item_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Int32_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::KeyValuePair_2_System_Int32_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Int32_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::KeyValuePair_2_System_Int32_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02EC52E0,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_2, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02EC5370,
        app::Object*,
        ICollection_get_SyncRoot_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02EC5500,
        void,
        ICollection_CopyTo_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_2, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_2, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B81E90,
        app::Object*,
        IList_get_Item_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        int32_t,
        IList_Add_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_2, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B81F90, bool, IsCompatibleObject_2, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B82080,
        bool,
        IList_Contains_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B82160,
        int32_t,
        IList_IndexOf_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Remove_2,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_2, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::IList_1_KeyValuePair_2_System_Object_System_Boolean_* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_3, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_Boolean_,
        get_Item_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B816B0,
        bool,
        Contains_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::KeyValuePair_2_System_Object_System_Boolean_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::KeyValuePair_2_System_Object_System_Boolean___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Boolean_*,
        GetEnumerator_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B81780,
        int32_t,
        IndexOf_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::KeyValuePair_2_System_Object_System_Boolean_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_Boolean_,
        System_Collections_Generic_IList_T__get_Item_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_Boolean_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::KeyValuePair_2_System_Object_System_Boolean_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_Boolean_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::KeyValuePair_2_System_Object_System_Boolean_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02EC5920,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_3, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02EC59B0,
        app::Object*,
        ICollection_get_SyncRoot_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02EC5B40,
        void,
        ICollection_CopyTo_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_3, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_3, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B81E90,
        app::Object*,
        IList_get_Item_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        int32_t,
        IList_Add_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_3, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B81F90, bool, IsCompatibleObject_3, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B82080,
        bool,
        IList_Contains_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B82160,
        int32_t,
        IList_IndexOf_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Remove_3,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_3, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::IList_1_KeyValuePair_2_System_Object_System_Byte_* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_4, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_Byte_,
        get_Item_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B816B0,
        bool,
        Contains_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::KeyValuePair_2_System_Object_System_Byte_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::KeyValuePair_2_System_Object_System_Byte___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Byte_*,
        GetEnumerator_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B81780,
        int32_t,
        IndexOf_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::KeyValuePair_2_System_Object_System_Byte_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_Byte_,
        System_Collections_Generic_IList_T__get_Item_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_Byte_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::KeyValuePair_2_System_Object_System_Byte_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_Byte_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::KeyValuePair_2_System_Object_System_Byte_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02FD4C10,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_4, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FD4CA0,
        app::Object*,
        ICollection_get_SyncRoot_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02FD4E30,
        void,
        ICollection_CopyTo_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_4, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_4, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B81E90,
        app::Object*,
        IList_get_Item_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        int32_t,
        IList_Add_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_4, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B81F90, bool, IsCompatibleObject_4, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B82080,
        bool,
        IList_Contains_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B82160,
        int32_t,
        IList_IndexOf_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Remove_4,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_4, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::IList_1_KeyValuePair_2_System_Object_System_Int32_* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_5, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_Int32_,
        get_Item_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B816B0,
        bool,
        Contains_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::KeyValuePair_2_System_Object_System_Int32_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::KeyValuePair_2_System_Object_System_Int32___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Int32_*,
        GetEnumerator_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B81780,
        int32_t,
        IndexOf_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::KeyValuePair_2_System_Object_System_Int32_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_Int32_,
        System_Collections_Generic_IList_T__get_Item_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_Int32_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::KeyValuePair_2_System_Object_System_Int32_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_Int32_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::KeyValuePair_2_System_Object_System_Int32_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02FD5250,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_5, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FD52E0,
        app::Object*,
        ICollection_get_SyncRoot_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02FD5470,
        void,
        ICollection_CopyTo_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_5, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_5, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B81E90,
        app::Object*,
        IList_get_Item_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        int32_t,
        IList_Add_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_5, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B81F90, bool, IsCompatibleObject_5, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B82080,
        bool,
        IList_Contains_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B82160,
        int32_t,
        IList_IndexOf_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Remove_5,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_5, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::IList_1_KeyValuePair_2_System_Object_System_Object_* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_6, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_Object_,
        get_Item_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B816B0,
        bool,
        Contains_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Object_*,
        GetEnumerator_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B81780,
        int32_t,
        IndexOf_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_Object_,
        System_Collections_Generic_IList_T__get_Item_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02FD5890,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_6, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FD5920,
        app::Object*,
        ICollection_get_SyncRoot_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02FD5AB0,
        void,
        ICollection_CopyTo_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_6, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_6, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B81E90,
        app::Object*,
        IList_get_Item_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        int32_t,
        IList_Add_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_6, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B81F90, bool, IsCompatibleObject_6, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B82080,
        bool,
        IList_Contains_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B82160,
        int32_t,
        IList_IndexOf_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Remove_6,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_6, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::IList_1_KeyValuePair_2_System_Object_System_Single_* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_7, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_Single_,
        get_Item_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B816B0,
        bool,
        Contains_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::KeyValuePair_2_System_Object_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::KeyValuePair_2_System_Object_System_Single___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Single_*,
        GetEnumerator_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B81780,
        int32_t,
        IndexOf_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::KeyValuePair_2_System_Object_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_Single_,
        System_Collections_Generic_IList_T__get_Item_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::KeyValuePair_2_System_Object_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::KeyValuePair_2_System_Object_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02FD5ED0,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_7, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FD5F60,
        app::Object*,
        ICollection_get_SyncRoot_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02FD60F0,
        void,
        ICollection_CopyTo_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_7, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_7, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B81E90,
        app::Object*,
        IList_get_Item_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        int32_t,
        IList_Add_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_7, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B81F90, bool, IsCompatibleObject_7, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B82080,
        bool,
        IList_Contains_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B82160,
        int32_t,
        IList_IndexOf_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Remove_7,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_7, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::IList_1_KeyValuePair_2_System_Object_System_ValueTuple_2_* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_8, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2_,
        get_Item_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B816B0,
        bool,
        Contains_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_ValueTuple_2_*,
        GetEnumerator_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B81780,
        int32_t,
        IndexOf_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2_,
        System_Collections_Generic_IList_T__get_Item_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        int32_t index,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02FD6510,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_8, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FD65A0,
        app::Object*,
        ICollection_get_SyncRoot_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02FD6730,
        void,
        ICollection_CopyTo_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_8, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_8, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B81E90,
        app::Object*,
        IList_get_Item_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        int32_t,
        IList_Add_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_8, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B81F90, bool, IsCompatibleObject_8, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B82080,
        bool,
        IList_Contains_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B82160,
        int32_t,
        IList_IndexOf_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Remove_8,
        app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_8, app::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Collections_Generic_KeyValuePair_2_
