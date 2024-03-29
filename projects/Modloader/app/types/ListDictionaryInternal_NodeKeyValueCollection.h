#pragma once
#include <Modloader/app/structs/ListDictionaryInternal_NodeKeyValueCollection.h>
#include <Modloader/app/structs/ListDictionaryInternal_NodeKeyValueCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListDictionaryInternal_NodeKeyValueCollection {
        inline app::ListDictionaryInternal_NodeKeyValueCollection__Class** type_info() {
            static app::ListDictionaryInternal_NodeKeyValueCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListDictionaryInternal_NodeKeyValueCollection__Class**)(modloader::win::memory::resolve_rva(0x047207D8));
            }
            return cache;
        }
        inline app::ListDictionaryInternal_NodeKeyValueCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionaryInternal_NodeKeyValueCollection__Class>(type_info(), "System.Collections", "ListDictionaryInternal", "NodeKeyValueCollection");
        }
        inline app::ListDictionaryInternal_NodeKeyValueCollection* create() {
            return il2cpp::create_object<app::ListDictionaryInternal_NodeKeyValueCollection>(get_class());
        }
    } // namespace ListDictionaryInternal_NodeKeyValueCollection
} // namespace app::classes::types
