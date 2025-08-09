#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/ListDictionaryInternal.h>
#include <Modloader/app/structs/ListDictionaryInternal_NodeEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::ListDictionaryInternal_NodeEnumerator {
    IL2CPP_REGISTER_METHOD(0x0202A190, void, ctor, app::ListDictionaryInternal_NodeEnumerator* this_ptr, app::ListDictionaryInternal* list)
    IL2CPP_REGISTER_METHOD(0x0202A1C0, app::Object*, get_Current, app::ListDictionaryInternal_NodeEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202A310, app::DictionaryEntry, get_Entry, app::ListDictionaryInternal_NodeEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202A3F0, app::Object*, get_Key, app::ListDictionaryInternal_NodeEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202A4C0, app::Object*, get_Value, app::ListDictionaryInternal_NodeEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202A590, bool, MoveNext, app::ListDictionaryInternal_NodeEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202A6A0, void, Reset, app::ListDictionaryInternal_NodeEnumerator* this_ptr)
} // namespace app::classes::System::Collections::ListDictionaryInternal_NodeEnumerator
