#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Linq::Lookup_2_TKey_TElement__Grouping_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Key, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, System_Collections_Generic_ICollection_TElement__get_Count, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_TElement__get_IsReadOnly, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025480E0, app::Object*, System_Collections_Generic_IList_TElement__get_Item, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025481B0, void, System_Collections_Generic_IList_TElement__set_Item, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02547D00, void, Add, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr, app::Object* element))
    IL2CPP_REGISTER_METHOD(0x02547E20, app::IEnumerator_1_System_Object_*, GetEnumerator, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225B610, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02547F40, void, System_Collections_Generic_ICollection_TElement__Add, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02547F80, void, System_Collections_Generic_ICollection_TElement__Clear, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02547FC0, bool, System_Collections_Generic_ICollection_TElement__Contains, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02547AA0, void, System_Collections_Generic_ICollection_TElement__CopyTo, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr, app::Object__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02547FF0, bool, System_Collections_Generic_ICollection_TElement__Remove, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02548030, int32_t, System_Collections_Generic_IList_TElement__IndexOf, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02548060, void, System_Collections_Generic_IList_TElement__Insert, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr, int32_t index, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x025480A0, void, System_Collections_Generic_IList_TElement__RemoveAt, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ * this_ptr))
} // namespace app::classes::System::Linq::Lookup_2_TKey_TElement__Grouping_System_Object_System_Object_
