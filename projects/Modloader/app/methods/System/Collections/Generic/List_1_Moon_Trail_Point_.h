#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Trail_Point.h>
#include <Modloader/app/structs/Action_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Comparison_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/IComparer_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/List_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Trail_Point_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/Trail_Point__Array.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Trail_Point_ {
    IL2CPP_REGISTER_METHOD(0x02DC9F90, app::Trail_Point, get_Item, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DC9FF0, void, set_Item, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index, app::Trail_Point value))
    IL2CPP_REGISTER_METHOD(0x02DCA400, void, Add, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Trail_Point item))
    IL2CPP_REGISTER_METHOD(0x02DCC180, void, RemoveAt, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02DC9980, void, ctor_3, (app::List_1_Moon_Trail_Point_ * this_ptr, app::IEnumerable_1_Moon_Trail_Point_* collection))
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DC9E30, app::Object*, ICollection_get_SyncRoot, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DCA070, bool, IsCompatibleObject, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02DCA1A0, app::Object*, IList_get_Item, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02DCA240, void, IList_set_Item, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02DCA4C0, int32_t, IList_Add, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_Moon_Trail_Point_ * this_ptr, app::IEnumerable_1_Moon_Trail_Point_* collection))
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_Moon_Trail_Point_*, AsReadOnly, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DCA6A0, int32_t, BinarySearch_1, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index, int32_t count, app::Trail_Point item, app::IComparer_1_Moon_Trail_Point_* comparer))
    IL2CPP_REGISTER_METHOD(0x02DCA770, int32_t, BinarySearch_2, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Trail_Point item, app::IComparer_1_Moon_Trail_Point_* comparer))
    IL2CPP_REGISTER_METHOD(0x02DCA830, bool, Contains, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Trail_Point item))
    IL2CPP_REGISTER_METHOD(0x02DCA970, bool, IList_Contains, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_1, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Trail_Point__Array* array))
    IL2CPP_REGISTER_METHOD(0x02DCAAE0, void, ICollection_CopyTo, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo_2, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index, app::Trail_Point__Array* array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo_3, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Trail_Point__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t min))
    IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Predicate_1_Moon_Trail_Point_* match))
    IL2CPP_REGISTER_METHOD(0x02DCABD0, app::Trail_Point, Find, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Predicate_1_Moon_Trail_Point_* match))
    IL2CPP_REGISTER_METHOD(0x02DCAD70, app::List_1_Moon_Trail_Point_*, FindAll, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Predicate_1_Moon_Trail_Point_* match))
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_1, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Predicate_1_Moon_Trail_Point_* match))
    IL2CPP_REGISTER_METHOD(0x02DCB000, int32_t, FindIndex_2, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t start_index, int32_t count, app::Predicate_1_Moon_Trail_Point_* match))
    IL2CPP_REGISTER_METHOD(0x02DCB150, void, ForEach, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Action_1_Moon_Trail_Point_* action))
    IL2CPP_REGISTER_METHOD(0x02DCB330, app::List_1_T_Enumerator_Moon_Trail_Point_, GetEnumerator, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DCB3B0, app::IEnumerator_1_Moon_Trail_Point_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DCB3B0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9DF0, app::List_1_Moon_Trail_Point_*, GetRange, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02DCB4A0, int32_t, IndexOf, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Trail_Point item))
    IL2CPP_REGISTER_METHOD(0x02DCB510, int32_t, IList_IndexOf, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02DCB680, void, Insert, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index, app::Trail_Point item))
    IL2CPP_REGISTER_METHOD(0x02DCB780, void, IList_Insert, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02DCB940, void, InsertRange, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index, app::IEnumerable_1_Moon_Trail_Point_* collection))
    IL2CPP_REGISTER_METHOD(0x02DCBCC0, bool, Remove, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Trail_Point item))
    IL2CPP_REGISTER_METHOD(0x02DCBD70, void, IList_Remove, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02DCBEE0, int32_t, RemoveAll, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Predicate_1_Moon_Trail_Point_* match))
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_2, (app::List_1_Moon_Trail_Point_ * this_ptr, app::IComparer_1_Moon_Trail_Point_* comparer))
    IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort_3, (app::List_1_Moon_Trail_Point_ * this_ptr, int32_t index, int32_t count, app::IComparer_1_Moon_Trail_Point_* comparer))
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_4, (app::List_1_Moon_Trail_Point_ * this_ptr, app::Comparison_1_Moon_Trail_Point_* comparison))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Trail_Point__Array*, ToArray, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (app::List_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor, ())
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Trail_Point_
