#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator {
    IL2CPP_REGISTER_METHOD(0x0202ACC0, void, ctor, (app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr, app::ListDictionary * list, bool is_keys))
    IL2CPP_REGISTER_METHOD(0x024963B0, app::Object *, get_Current, (app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047840F0, ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02496490, bool, MoveNext, (app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B298, ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024965A0, void, Reset, (app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775798, ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator_Reset__MethodInfo)
}
