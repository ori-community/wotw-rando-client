#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/BidirectionalDictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/BidirectionalValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/BidirectionalValuePair_2_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_BidirectionalValuePair_2_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::BidirectionalDictionary_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0243AC00, app::ICollection_1_System_Object_*, get_FirstValues, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271C9B0, app::ICollection_1_System_Object_*, get_SecondValues, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271D470, int32_t, System_Collections_Generic_ICollection_Moon_BidirectionalValuePair_T1_T2___get_Count, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271D4A0, bool, System_Collections_Generic_ICollection_Moon_BidirectionalValuePair_T1_T2___get_IsReadOnly, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271D470, int32_t, ICollection_get_Count, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271D650, bool, ICollection_get_IsSynchronized, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271D6E0, app::Object*, ICollection_get_SyncRoot, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271C9E0, void, Add, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* first, app::Object* second))
    IL2CPP_REGISTER_METHOD(0x0271CB90, app::Object*, GetByFirst, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* first))
    IL2CPP_REGISTER_METHOD(0x0271CC90, app::Object*, GetBySecond, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* second))
    IL2CPP_REGISTER_METHOD(0x0271CD90, void, RemoveByFirst, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* first))
    IL2CPP_REGISTER_METHOD(0x0271CEE0, void, RemoveBySecond, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* second))
    IL2CPP_REGISTER_METHOD(0x0271D030, bool, TryGetByFirst, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* first, app::Object** second_out))
    IL2CPP_REGISTER_METHOD(0x0271D060, bool, TryGetBySecond, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* second, app::Object** first_out))
    IL2CPP_REGISTER_METHOD(0x01A72D00, bool, ContainsFirst, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* first))
    IL2CPP_REGISTER_METHOD(0x0271D090, bool, ContainsSecond, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* second))
    IL2CPP_REGISTER_METHOD(0x0271D0C0, void, Clear, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271D130, app::IEnumerator_1_Moon_BidirectionalValuePair_2_*, System_Collections_Generic_IEnumerable_Moon_BidirectionalValuePair_T1_T2___GetEnumerator, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271D130, app::IEnumerator*, IEnumerable_GetEnumerator, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271D250, void, System_Collections_Generic_ICollection_Moon_BidirectionalValuePair_T1_T2___Add, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::BidirectionalValuePair_2_System_Object_System_Object_ item))
    IL2CPP_REGISTER_METHOD(0x0271D290, void, System_Collections_Generic_ICollection_Moon_BidirectionalValuePair_T1_T2___Clear, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271D2C0, bool, System_Collections_Generic_ICollection_Moon_BidirectionalValuePair_T1_T2___Contains, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::BidirectionalValuePair_2_System_Object_System_Object_ item))
    IL2CPP_REGISTER_METHOD(0x0271D360, void, System_Collections_Generic_ICollection_Moon_BidirectionalValuePair_T1_T2___CopyTo, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::BidirectionalValuePair_2_System_Object_System_Object___Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x0271D390, bool, System_Collections_Generic_ICollection_Moon_BidirectionalValuePair_T1_T2___Remove, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::BidirectionalValuePair_2_System_Object_System_Object_ item))
    IL2CPP_REGISTER_METHOD(0x0271D5A0, void, ICollection_CopyTo, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0271D770, void, CopyTo, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr, app::BidirectionalValuePair_2_System_Object_System_Object___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0271DAE0, void, ctor, (app::BidirectionalDictionary_2_System_Object_System_Object_ * this_ptr))
} // namespace app::classes::Moon::BidirectionalDictionary_2_System_Object_System_Object_
