#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListDictionary_NodeEnumerator.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/ListDictionary.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Specialized::ListDictionary_NodeEnumerator {
    IL2CPP_REGISTER_METHOD(0x0202A190, void, ctor, (app::ListDictionary_NodeEnumerator * this_ptr, app::ListDictionary* list))
    IL2CPP_REGISTER_METHOD(0x024959B0, app::Object*, get_Current, (app::ListDictionary_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02495B00, app::DictionaryEntry, get_Entry, (app::ListDictionary_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02495BE0, app::Object*, get_Key, (app::ListDictionary_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02495CB0, app::Object*, get_Value, (app::ListDictionary_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02495D80, bool, MoveNext, (app::ListDictionary_NodeEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02495E90, void, Reset, (app::ListDictionary_NodeEnumerator * this_ptr))
} // namespace app::classes::System::Collections::Specialized::ListDictionary_NodeEnumerator
