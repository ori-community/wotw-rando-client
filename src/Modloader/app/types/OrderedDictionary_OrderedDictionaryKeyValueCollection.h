#pragma once
#include <Modloader/app/structs/OrderedDictionary_OrderedDictionaryKeyValueCollection.h>
#include <Modloader/app/structs/OrderedDictionary_OrderedDictionaryKeyValueCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrderedDictionary_OrderedDictionaryKeyValueCollection {
        inline app::OrderedDictionary_OrderedDictionaryKeyValueCollection__Class** type_info() {
            static app::OrderedDictionary_OrderedDictionaryKeyValueCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrderedDictionary_OrderedDictionaryKeyValueCollection__Class**)(modloader::win::memory::resolve_rva(0x04723530));
            }
            return cache;
        }
        inline app::OrderedDictionary_OrderedDictionaryKeyValueCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::OrderedDictionary_OrderedDictionaryKeyValueCollection__Class>(type_info(), "System.Collections.Specialized", "OrderedDictionary", "OrderedDictionaryKeyValueCollection");
        }
        inline app::OrderedDictionary_OrderedDictionaryKeyValueCollection* create() {
            return il2cpp::create_object<app::OrderedDictionary_OrderedDictionaryKeyValueCollection>(get_class());
        }
    } // namespace OrderedDictionary_OrderedDictionaryKeyValueCollection
} // namespace app::classes::types
