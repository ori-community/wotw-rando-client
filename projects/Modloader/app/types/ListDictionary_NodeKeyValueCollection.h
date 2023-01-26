#pragma once
#include <Modloader/app/structs/ListDictionary_NodeKeyValueCollection.h>
#include <Modloader/app/structs/ListDictionary_NodeKeyValueCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListDictionary_NodeKeyValueCollection {
        inline app::ListDictionary_NodeKeyValueCollection__Class** type_info() {
            static app::ListDictionary_NodeKeyValueCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListDictionary_NodeKeyValueCollection__Class**)(modloader::win::memory::resolve_rva(0x04749448));
            }
            return cache;
        }
        inline app::ListDictionary_NodeKeyValueCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionary_NodeKeyValueCollection__Class>(type_info(), "System.Collections.Specialized", "ListDictionary", "NodeKeyValueCollection");
        }
        inline app::ListDictionary_NodeKeyValueCollection* create() {
            return il2cpp::create_object<app::ListDictionary_NodeKeyValueCollection>(get_class());
        }
    } // namespace ListDictionary_NodeKeyValueCollection
} // namespace app::classes::types
