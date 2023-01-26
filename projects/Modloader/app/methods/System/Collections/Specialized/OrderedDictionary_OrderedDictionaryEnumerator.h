#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OrderedDictionary_OrderedDictionaryEnumerator.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator {
    IL2CPP_REGISTER_METHOD(0x0249D300, void, ctor, (app::OrderedDictionary_OrderedDictionaryEnumerator * this_ptr, app::ArrayList* array, int32_t object_return_type))
    IL2CPP_REGISTER_METHOD(0x0249D350, app::Object*, get_Current, (app::OrderedDictionary_OrderedDictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0249D5E0, app::DictionaryEntry, get_Entry, (app::OrderedDictionary_OrderedDictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0249D720, app::Object*, get_Key, (app::OrderedDictionary_OrderedDictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0249D7E0, app::Object*, get_Value, (app::OrderedDictionary_OrderedDictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0249D8B0, bool, MoveNext, (app::OrderedDictionary_OrderedDictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0249D940, void, Reset, (app::OrderedDictionary_OrderedDictionaryEnumerator * this_ptr))
} // namespace app::classes::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator
