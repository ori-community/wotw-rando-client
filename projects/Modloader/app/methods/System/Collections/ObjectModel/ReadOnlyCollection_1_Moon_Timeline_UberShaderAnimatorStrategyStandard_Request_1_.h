#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3.h>
#include <Modloader/app/structs/IList_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_.h>
#include <Modloader/app/structs/IList_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1.h>
#include <Modloader/app/structs/IList_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2.h>
#include <Modloader/app/structs/IList_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_System_Object_.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_System_Single_.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_ {
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        app::IList_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_1, app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object_,
        get_Item_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B816B0,
        bool,
        Contains_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3*,
        GetEnumerator_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B81780,
        int32_t,
        IndexOf_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B815D0,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object_,
        System_Collections_Generic_IList_T__get_Item_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        int32_t index,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        int32_t index,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02E45350,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02E453E0,
        app::Object*,
        ICollection_get_SyncRoot_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02E45570,
        void,
        ICollection_CopyTo_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        IList_get_IsFixedSize_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        IList_get_IsReadOnly_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B81E90,
        app::Object*,
        IList_get_Item_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        int32_t,
        IList_Add_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_1, app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B81F90, bool, IsCompatibleObject_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B82080,
        bool,
        IList_Contains_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B82160,
        int32_t,
        IList_IndexOf_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Remove_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_RemoveAt_1,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        app::IList_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_2, app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CFE3E0,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single_,
        get_Item_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02CFFB20,
        bool,
        Contains_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2*,
        GetEnumerator_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CFFB90,
        int32_t,
        IndexOf_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CFE3E0,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single_,
        System_Collections_Generic_IList_T__get_Item_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        int32_t index,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        int32_t index,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02E45990,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02E45A20,
        app::Object*,
        ICollection_get_SyncRoot_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02E45BB0,
        void,
        ICollection_CopyTo_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        IList_get_IsFixedSize_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        IList_get_IsReadOnly_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CFEBA0,
        app::Object*,
        IList_get_Item_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        int32_t,
        IList_Add_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_2, app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CFEC40, bool, IsCompatibleObject_2, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02D00280,
        bool,
        IList_Contains_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02D00360,
        int32_t,
        IList_IndexOf_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Remove_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_RemoveAt_2,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        app::IList_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_3, app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B7F6F0,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_,
        get_Item_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7F7D0,
        bool,
        Contains_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_*,
        GetEnumerator_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7F840,
        int32_t,
        IndexOf_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7F6F0,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_,
        System_Collections_Generic_IList_T__get_Item_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        int32_t index,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        int32_t index,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02E45FB0,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02E46040,
        app::Object*,
        ICollection_get_SyncRoot_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02E461D0,
        void,
        ICollection_CopyTo_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        IList_get_IsFixedSize_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        IList_get_IsReadOnly_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7FF60,
        app::Object*,
        IList_get_Item_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        int32_t,
        IList_Add_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_3, app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B80070, bool, IsCompatibleObject_3, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B80160,
        bool,
        IList_Contains_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B80240,
        int32_t,
        IList_IndexOf_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Remove_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_RemoveAt_3,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        app::IList_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_4, app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B7F6F0,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_,
        get_Item_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7F7D0,
        bool,
        Contains_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1*,
        GetEnumerator_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7F840,
        int32_t,
        IndexOf_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7F6F0,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_,
        System_Collections_Generic_IList_T__get_Item_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        int32_t index,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        int32_t index,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02E465F0,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02E46680,
        app::Object*,
        ICollection_get_SyncRoot_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02E46810,
        void,
        ICollection_CopyTo_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        IList_get_IsFixedSize_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        IList_get_IsReadOnly_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7FF60,
        app::Object*,
        IList_get_Item_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        int32_t,
        IList_Add_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_4, app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B80070, bool, IsCompatibleObject_4, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B80160,
        bool,
        IList_Contains_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B80240,
        int32_t,
        IList_IndexOf_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Remove_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_RemoveAt_4,
        app::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* this_ptr,
        int32_t index
    )
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_
