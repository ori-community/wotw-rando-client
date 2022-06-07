#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::ListDictionaryInternal_NodeKeyValueCollection {
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor, (app::ListDictionaryInternal_NodeKeyValueCollection * this_ptr, app::ListDictionaryInternal * list, bool is_keys))
    IL2CPP_REGISTER_METHOD(0x0202A780, void, ICollection_CopyTo, (app::ListDictionaryInternal_NodeKeyValueCollection * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047838C8, ListDictionaryInternal_NodeKeyValueCollection_System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202A9B0, int32_t, ICollection_get_Count, (app::ListDictionaryInternal_NodeKeyValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::ListDictionaryInternal_NodeKeyValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202A9F0, app::Object *, ICollection_get_SyncRoot, (app::ListDictionaryInternal_NodeKeyValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202AB50, app::IEnumerator *, IEnumerable_GetEnumerator, (app::ListDictionaryInternal_NodeKeyValueCollection * this_ptr))
}
