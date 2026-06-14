#pragma once
#include <Modloader/app/structs/ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator.h>
#include <Modloader/app/structs/ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator {
        inline app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator__Class** type_info() {
            static app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04743CF0));
            }
            return cache;
        }
        inline app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator__Class>(type_info(), "System.Collections", "ListDictionaryInternal+NodeKeyValueCollection", "NodeKeyValueEnumerator");
        }
        inline app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator* create() {
            return il2cpp::create_object<app::ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator>(get_class());
        }
    } // namespace ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator
} // namespace app::classes::types
