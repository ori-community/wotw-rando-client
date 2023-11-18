#pragma once
#include <Modloader/app/structs/OrderedDictionary.h>
#include <Modloader/app/structs/OrderedDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrderedDictionary {
        inline app::OrderedDictionary__Class** type_info() {
            static app::OrderedDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrderedDictionary__Class**)(modloader::win::memory::resolve_rva(0x0475B6D0));
            }
            return cache;
        }
        inline app::OrderedDictionary__Class* get_class() {
            return il2cpp::get_class<app::OrderedDictionary__Class>(type_info(), "System.Collections.Specialized", "OrderedDictionary");
        }
        inline app::OrderedDictionary* create() {
            return il2cpp::create_object<app::OrderedDictionary>(get_class());
        }
    } // namespace OrderedDictionary
} // namespace app::classes::types
