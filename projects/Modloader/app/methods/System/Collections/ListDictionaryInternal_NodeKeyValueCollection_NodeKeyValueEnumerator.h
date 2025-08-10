#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListDictionaryInternal.h>
#include <Modloader/app/structs/ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator {
    IL2CPP_REGISTER_METHOD(
        0x0202ACC0,
        void,
        ctor,
        app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator* this_ptr,
        app::ListDictionaryInternal* list,
        bool is_keys
    )
    IL2CPP_REGISTER_METHOD(0x0202ACF0, app::Object*, get_Current, app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202ADD0, bool, MoveNext, app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202AEE0, void, Reset, app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator* this_ptr)
} // namespace app::classes::System::Collections::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator
