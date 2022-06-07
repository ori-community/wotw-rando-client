#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Specialized::ListDictionary_NodeEnumerator {
    IL2CPP_REGISTER_METHOD(0x0202A190, void, ctor, (app::ListDictionary_NodeEnumerator * this_ptr, app::ListDictionary * list))
    IL2CPP_REGISTER_METHOD(0x024959B0, app::Object *, get_Current, (app::ListDictionary_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02495B00, app::DictionaryEntry, get_Entry, (app::ListDictionary_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047363A0, ListDictionary_NodeEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02495BE0, app::Object *, get_Key, (app::ListDictionary_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E3A0, ListDictionary_NodeEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02495CB0, app::Object *, get_Value, (app::ListDictionary_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047989E0, ListDictionary_NodeEnumerator_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02495D80, bool, MoveNext, (app::ListDictionary_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D280, ListDictionary_NodeEnumerator_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02495E90, void, Reset, (app::ListDictionary_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739898, ListDictionary_NodeEnumerator_Reset__MethodInfo)
}
