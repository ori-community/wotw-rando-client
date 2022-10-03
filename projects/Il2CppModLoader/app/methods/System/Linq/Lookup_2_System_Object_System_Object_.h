#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Lookup_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0153DB70, app::Lookup_2_System_Object_System_Object_*, Create, (app::IEnumerable_1_System_Object_ * source, app::Func_2_Object_Object_* key_selector, app::Func_2_Object_Object_* element_selector, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04790440, Lookup_2_System_Object_System_Object__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025481F0, void, ctor, (app::Lookup_2_System_Object_System_Object_ * this_ptr, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02548270, app::IEnumerator_1_System_Linq_IGrouping_2_*, GetEnumerator, (app::Lookup_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D9BE0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Lookup_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02548390, int32_t, InternalGetHashCode, (app::Lookup_2_System_Object_System_Object_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02548410, app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_*, GetGrouping, (app::Lookup_2_System_Object_System_Object_ * this_ptr, app::Object* key, bool create))
    IL2CPP_REGISTER_METHOD(0x02548970, void, Resize, (app::Lookup_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797E08, Lookup_2_System_Object_System_Object__Resize__MethodInfo)
} // namespace app::classes::System::Linq::Lookup_2_System_Object_System_Object_
