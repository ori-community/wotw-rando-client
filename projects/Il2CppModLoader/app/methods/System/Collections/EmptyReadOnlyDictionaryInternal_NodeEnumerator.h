#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::EmptyReadOnlyDictionaryInternal_NodeEnumerator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EmptyReadOnlyDictionaryInternal_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MoveNext, (app::EmptyReadOnlyDictionaryInternal_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02021C00, app::Object*, get_Current, (app::EmptyReadOnlyDictionaryInternal_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733B78, EmptyReadOnlyDictionaryInternal_NodeEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, (app::EmptyReadOnlyDictionaryInternal_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02021C70, app::Object*, get_Key, (app::EmptyReadOnlyDictionaryInternal_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471F970, EmptyReadOnlyDictionaryInternal_NodeEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02021CE0, app::Object*, get_Value, (app::EmptyReadOnlyDictionaryInternal_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739398, EmptyReadOnlyDictionaryInternal_NodeEnumerator_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02021D50, app::DictionaryEntry, get_Entry, (app::EmptyReadOnlyDictionaryInternal_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776108, EmptyReadOnlyDictionaryInternal_NodeEnumerator_get_Entry__MethodInfo)
} // namespace app::classes::System::Collections::EmptyReadOnlyDictionaryInternal_NodeEnumerator
