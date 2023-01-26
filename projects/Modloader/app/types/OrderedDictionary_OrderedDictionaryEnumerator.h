#pragma once
#include <Modloader/app/structs/OrderedDictionary_OrderedDictionaryEnumerator.h>
#include <Modloader/app/structs/OrderedDictionary_OrderedDictionaryEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrderedDictionary_OrderedDictionaryEnumerator {
        inline app::OrderedDictionary_OrderedDictionaryEnumerator__Class** type_info() {
            static app::OrderedDictionary_OrderedDictionaryEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrderedDictionary_OrderedDictionaryEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04753998));
            }
            return cache;
        }
        inline app::OrderedDictionary_OrderedDictionaryEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::OrderedDictionary_OrderedDictionaryEnumerator__Class>(type_info(), "System.Collections.Specialized", "OrderedDictionary", "OrderedDictionaryEnumerator");
        }
        inline app::OrderedDictionary_OrderedDictionaryEnumerator* create() {
            return il2cpp::create_object<app::OrderedDictionary_OrderedDictionaryEnumerator>(get_class());
        }
    } // namespace OrderedDictionary_OrderedDictionaryEnumerator
} // namespace app::classes::types
