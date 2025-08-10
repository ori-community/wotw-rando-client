#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/EmptyReadOnlyDictionaryInternal_NodeEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::EmptyReadOnlyDictionaryInternal_NodeEnumerator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EmptyReadOnlyDictionaryInternal_NodeEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MoveNext, app::EmptyReadOnlyDictionaryInternal_NodeEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02021C00, app::Object*, get_Current, app::EmptyReadOnlyDictionaryInternal_NodeEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, app::EmptyReadOnlyDictionaryInternal_NodeEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02021C70, app::Object*, get_Key, app::EmptyReadOnlyDictionaryInternal_NodeEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02021CE0, app::Object*, get_Value, app::EmptyReadOnlyDictionaryInternal_NodeEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02021D50, app::DictionaryEntry, get_Entry, app::EmptyReadOnlyDictionaryInternal_NodeEnumerator* this_ptr)
} // namespace app::classes::System::Collections::EmptyReadOnlyDictionaryInternal_NodeEnumerator
