#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/IEnumerator_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/IEnumerator_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/IList_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/IList_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/IList_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ {
    IL2CPP_REGISTER_METHOD(0x02B7DCF0, void, ctor_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::IList_1_GenericCastManager_1_NativeArrays_* list))
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3CAE0, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_, get_Item_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02E3CB70, bool, Contains_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7DEC0, void, CopyTo_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DF30, app::IEnumerator_1_GenericCastManager_1_NativeArrays__2*, GetEnumerator_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3CBF0, int32_t, IndexOf_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3CAE0, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_, System_Collections_Generic_IList_T__get_Item_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__set_Item_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, int32_t index, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Add_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Clear_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__Insert_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, int32_t index, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, bool, System_Collections_Generic_ICollection_T__Remove_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__RemoveAt_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F12AC0, app::IEnumerator*, IEnumerable_GetEnumerator_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F12B50, app::Object*, ICollection_get_SyncRoot_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F12CE0, void, ICollection_CopyTo_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3D330, app::Object*, IList_get_Item_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_set_Item_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, int32_t, IList_Add_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3D400, bool, IsCompatibleObject_1, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02E3D520, bool, IList_Contains_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02E3D610, int32_t, IList_IndexOf_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Insert_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Remove_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_1, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DCF0, void, ctor_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::IList_1_GenericCastManager_1_NativeArrays__1* list))
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3CAE0, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_, get_Item_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02E3CB70, bool, Contains_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7DEC0, void, CopyTo_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DF30, app::IEnumerator_1_GenericCastManager_1_NativeArrays__1*, GetEnumerator_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3CBF0, int32_t, IndexOf_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3CAE0, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_, System_Collections_Generic_IList_T__get_Item_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__set_Item_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, int32_t index, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Add_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Clear_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__Insert_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, int32_t index, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, bool, System_Collections_Generic_ICollection_T__Remove_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__RemoveAt_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F13110, app::IEnumerator*, IEnumerable_GetEnumerator_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F131A0, app::Object*, ICollection_get_SyncRoot_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F13330, void, ICollection_CopyTo_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3D330, app::Object*, IList_get_Item_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_set_Item_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, int32_t, IList_Add_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3D400, bool, IsCompatibleObject_2, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02E3D520, bool, IList_Contains_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02E3D610, int32_t, IList_IndexOf_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Insert_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Remove_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_2, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DCF0, void, ctor_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::IList_1_GenericCastManager_1_NativeArrays__2* list))
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3CAE0, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_, get_Item_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02E3CB70, bool, Contains_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7DEC0, void, CopyTo_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DF30, app::IEnumerator_1_GenericCastManager_1_NativeArrays_*, GetEnumerator_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3CBF0, int32_t, IndexOf_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3CAE0, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_, System_Collections_Generic_IList_T__get_Item_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__set_Item_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, int32_t index, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Add_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Clear_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__Insert_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, int32_t index, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, bool, System_Collections_Generic_ICollection_T__Remove_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__RemoveAt_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F13760, app::IEnumerator*, IEnumerable_GetEnumerator_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F137F0, app::Object*, ICollection_get_SyncRoot_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F13980, void, ICollection_CopyTo_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3D330, app::Object*, IList_get_Item_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_set_Item_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, int32_t, IList_Add_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E3D400, bool, IsCompatibleObject_3, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02E3D520, bool, IList_Contains_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02E3D610, int32_t, IList_IndexOf_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Insert_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Remove_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_3, (app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_
