#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator {
    IL2CPP_REGISTER_METHOD(0x02314440, void, ctor, (app::MessageDictionary_DictionaryEnumerator * this_ptr, app::MessageDictionary* method_dictionary))
    IL2CPP_REGISTER_METHOD(0x02314500, app::Object*, get_Current, (app::MessageDictionary_DictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023145A0, bool, MoveNext, (app::MessageDictionary_DictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02314700, void, Reset, (app::MessageDictionary_DictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023147A0, app::DictionaryEntry, get_Entry, (app::MessageDictionary_DictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763088, MessageDictionary_DictionaryEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02314920, app::Object*, get_Key, (app::MessageDictionary_DictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02314940, app::Object*, get_Value, (app::MessageDictionary_DictionaryEnumerator * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator
