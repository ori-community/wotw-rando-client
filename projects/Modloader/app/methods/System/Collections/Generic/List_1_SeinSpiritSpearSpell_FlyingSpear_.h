#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear.h>
#include <Modloader/app/structs/IEnumerable_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/IComparer_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear__Array.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Predicate_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/Action_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/IEnumerator_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Comparison_1_SeinSpiritSpearSpell_FlyingSpear_.h>

namespace app::classes::System::Collections::Generic::List_1_SeinSpiritSpearSpell_FlyingSpear_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795550, List_1_SeinSpiritSpearSpell_FlyingSpear__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D842B0, app::SeinSpiritSpearSpell_FlyingSpear, get_Item, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04767C98, List_1_SeinSpiritSpearSpell_FlyingSpear__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D84300, void, set_Item, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index, app::SeinSpiritSpearSpell_FlyingSpear value))
    IL2CPP_REGISTER_METHODINFO(0x04774F50, List_1_SeinSpiritSpearSpell_FlyingSpear__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D86340, void, RemoveAt, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04784728, List_1_SeinSpiritSpearSpell_FlyingSpear__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D846E0, void, Add, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear item))
    IL2CPP_REGISTER_METHODINFO(0x04717038, List_1_SeinSpiritSpearSpell_FlyingSpear__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047732B0, List_1_SeinSpiritSpearSpell_FlyingSpear___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02D83CB0, void, ctor_3, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::IEnumerable_1_SeinSpiritSpearSpell_FlyingSpear_* collection))
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D84150, app::Object*, ICollection_get_SyncRoot, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D84380, bool, IsCompatibleObject, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02D844A0, app::Object*, IList_get_Item, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02D84530, void, IList_set_Item, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02D847A0, int32_t, IList_Add, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::IEnumerable_1_SeinSpiritSpearSpell_FlyingSpear_* collection))
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_SeinSpiritSpearSpell_FlyingSpear_*, AsReadOnly, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D84970, int32_t, BinarySearch_1, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index, int32_t count, app::SeinSpiritSpearSpell_FlyingSpear item, app::IComparer_1_SeinSpiritSpearSpell_FlyingSpear_* comparer))
    IL2CPP_REGISTER_METHOD(0x02D84A20, int32_t, BinarySearch_2, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear item, app::IComparer_1_SeinSpiritSpearSpell_FlyingSpear_* comparer))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D84AD0, bool, Contains, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear item))
    IL2CPP_REGISTER_METHOD(0x02D84C00, bool, IList_Contains, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_1, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear__Array* array))
    IL2CPP_REGISTER_METHOD(0x02D84D70, void, ICollection_CopyTo, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo_2, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index, app::SeinSpiritSpearSpell_FlyingSpear__Array* array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo_3, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t min))
    IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Predicate_1_SeinSpiritSpearSpell_FlyingSpear_* match))
    IL2CPP_REGISTER_METHOD(0x02D84E60, app::SeinSpiritSpearSpell_FlyingSpear, Find, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Predicate_1_SeinSpiritSpearSpell_FlyingSpear_* match))
    IL2CPP_REGISTER_METHOD(0x02D84FF0, app::List_1_SeinSpiritSpearSpell_FlyingSpear_*, FindAll, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Predicate_1_SeinSpiritSpearSpell_FlyingSpear_* match))
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_1, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Predicate_1_SeinSpiritSpearSpell_FlyingSpear_* match))
    IL2CPP_REGISTER_METHOD(0x02D85270, int32_t, FindIndex_2, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t start_index, int32_t count, app::Predicate_1_SeinSpiritSpearSpell_FlyingSpear_* match))
    IL2CPP_REGISTER_METHOD(0x02D853B0, void, ForEach, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Action_1_SeinSpiritSpearSpell_FlyingSpear_* action))
    IL2CPP_REGISTER_METHOD(0x02D85580, app::List_1_T_Enumerator_SeinSpiritSpearSpell_FlyingSpear_, GetEnumerator, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D855F0, app::IEnumerator_1_SeinSpiritSpearSpell_FlyingSpear_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D855F0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9DF0, app::List_1_SeinSpiritSpearSpell_FlyingSpear_*, GetRange, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D856D0, int32_t, IndexOf, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear item))
    IL2CPP_REGISTER_METHOD(0x02D85730, int32_t, IList_IndexOf, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02D858A0, void, Insert, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index, app::SeinSpiritSpearSpell_FlyingSpear item))
    IL2CPP_REGISTER_METHOD(0x02D859A0, void, IList_Insert, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02D85B50, void, InsertRange, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index, app::IEnumerable_1_SeinSpiritSpearSpell_FlyingSpear_* collection))
    IL2CPP_REGISTER_METHOD(0x02D85EC0, bool, Remove, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear item))
    IL2CPP_REGISTER_METHOD(0x02D85F60, void, IList_Remove, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02D860C0, int32_t, RemoveAll, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Predicate_1_SeinSpiritSpearSpell_FlyingSpear_* match))
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_2, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::IComparer_1_SeinSpiritSpearSpell_FlyingSpear_* comparer))
    IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort_3, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, int32_t index, int32_t count, app::IComparer_1_SeinSpiritSpearSpell_FlyingSpear_* comparer))
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_4, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_* comparison))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::SeinSpiritSpearSpell_FlyingSpear__Array*, ToArray, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (app::List_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor, ())
} // namespace app::classes::System::Collections::Generic::List_1_SeinSpiritSpearSpell_FlyingSpear_
