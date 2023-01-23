#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReadOnlyCollectionBuilder_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Object_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02771D10, void, set_Capacity, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04782F38, ReadOnlyCollectionBuilder_1_System_Object__set_Capacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02772110, app::Object*, get_Item, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04772810, ReadOnlyCollectionBuilder_1_System_Object__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027721F0, void, set_Item, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04782708, ReadOnlyCollectionBuilder_1_System_Object__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02772BE0, app::Object*, IList_get_Item, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02772C10, void, IList_set_Item, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04764AE8, ReadOnlyCollectionBuilder_1_System_Object__System_Collections_IList_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, ICollection_get_SyncRoot, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02771C10, void, ctor_2, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04709EE8, ReadOnlyCollectionBuilder_1_System_Object___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02771E60, int32_t, IndexOf, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02771E90, void, Insert, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, int32_t index, app::Object* item))
    IL2CPP_REGISTER_METHODINFO(0x047824E0, ReadOnlyCollectionBuilder_1_System_Object__Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02771FF0, void, RemoveAt, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476D1F8, ReadOnlyCollectionBuilder_1_System_Object__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027722E0, void, Add, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02772370, bool, Contains, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, app::Object__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02772480, bool, Remove, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x027724F0, app::IEnumerator_1_System_Object_*, GetEnumerator, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02772600, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02772630, int32_t, IList_Add, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04738480, ReadOnlyCollectionBuilder_1_System_Object__System_Collections_IList_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027727E0, bool, IList_Contains, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x027728B0, int32_t, IList_IndexOf, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02772980, void, IList_Insert, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0477ADD0, ReadOnlyCollectionBuilder_1_System_Object__System_Collections_IList_Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02772B20, void, IList_Remove, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02772DB0, void, ICollection_CopyTo, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047694B0, ReadOnlyCollectionBuilder_1_System_Object__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Object__Array*, ToArray, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02772ED0, app::ReadOnlyCollection_1_System_Object_*, ToReadOnlyCollection, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02773040, void, EnsureCapacity, (app::ReadOnlyCollectionBuilder_1_System_Object_ * this_ptr, int32_t min))
    IL2CPP_REGISTER_METHOD(0x027730C0, bool, IsCompatibleObject, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02773130, void, ValidateNullValue, (app::Object * value, app::String* argument))
    IL2CPP_REGISTER_METHODINFO(0x0470A888, ReadOnlyCollectionBuilder_1_System_Object__ValidateNullValue__MethodInfo)
} // namespace app::classes::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_System_Object_
