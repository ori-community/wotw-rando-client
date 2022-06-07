#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::ListDictionaryInternal {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02028E50, app::Object *, get_Item, (app::ListDictionaryInternal * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0472C078, ListDictionaryInternal_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02028F70, void, set_Item, (app::ListDictionaryInternal * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04725760, ListDictionaryInternal_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Count, (app::ListDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02029290, app::ICollection *, get_Keys, (app::ListDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::ListDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, (app::ListDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::ListDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020293E0, app::Object *, get_SyncRoot, (app::ListDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02029540, app::ICollection *, get_Values, (app::ListDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02029690, void, Add, (app::ListDictionaryInternal * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0472E688, ListDictionaryInternal_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02029A50, void, Clear, (app::ListDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02029A60, bool, Contains, (app::ListDictionaryInternal * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0472D658, ListDictionaryInternal_Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02029B70, void, CopyTo, (app::ListDictionaryInternal * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472AA90, ListDictionaryInternal_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02029D80, app::IDictionaryEnumerator *, GetEnumerator, (app::ListDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02029EE0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::ListDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202A040, void, Remove, (app::ListDictionaryInternal * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x04761CC0, ListDictionaryInternal_Remove__MethodInfo)
}
