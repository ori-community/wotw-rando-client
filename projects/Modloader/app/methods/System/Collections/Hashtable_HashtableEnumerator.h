#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Hashtable_HashtableEnumerator {
    IL2CPP_REGISTER_METHOD(0x020270A0, void, ctor, (app::Hashtable_HashtableEnumerator * this_ptr, app::Hashtable* hashtable, int32_t get_obj_ret_type))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, (app::Hashtable_HashtableEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020270E0, app::Object*, get_Key, (app::Hashtable_HashtableEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04786CB8, Hashtable_HashtableEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020271B0, bool, MoveNext, (app::Hashtable_HashtableEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047208A8, Hashtable_HashtableEnumerator_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02027370, app::DictionaryEntry, get_Entry, (app::Hashtable_HashtableEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D098, Hashtable_HashtableEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02027450, app::Object*, get_Current, (app::Hashtable_HashtableEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751290, Hashtable_HashtableEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02027570, app::Object*, get_Value, (app::Hashtable_HashtableEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470BD80, Hashtable_HashtableEnumerator_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02027640, void, Reset, (app::Hashtable_HashtableEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047592E8, Hashtable_HashtableEnumerator_Reset__MethodInfo)
} // namespace app::classes::System::Collections::Hashtable_HashtableEnumerator
