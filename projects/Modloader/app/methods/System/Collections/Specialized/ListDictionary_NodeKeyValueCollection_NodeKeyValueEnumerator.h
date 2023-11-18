#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator.h>
#include <Modloader/app/structs/ListDictionary.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator {
    IL2CPP_REGISTER_METHOD(0x0202ACC0, void, ctor, (app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr, app::ListDictionary* list, bool is_keys))
    IL2CPP_REGISTER_METHOD(0x024963B0, app::Object*, get_Current, (app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02496490, bool, MoveNext, (app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024965A0, void, Reset, (app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator * this_ptr))
} // namespace app::classes::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator
