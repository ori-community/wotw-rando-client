#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator {
    IL2CPP_REGISTER_METHOD(0x0202ACC0, void, ctor, (app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr, app::ListDictionaryInternal * list, bool is_keys))
    IL2CPP_REGISTER_METHOD(0x0202ACF0, app::Object *, get_Current, (app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750718, ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202ADD0, bool, MoveNext, (app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047089A8, ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202AEE0, void, Reset, (app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473DFD0, ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator_Reset__MethodInfo)
}
