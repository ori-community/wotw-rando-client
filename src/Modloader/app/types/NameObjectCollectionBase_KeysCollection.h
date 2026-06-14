#pragma once
#include <Modloader/app/structs/NameObjectCollectionBase_KeysCollection.h>
#include <Modloader/app/structs/NameObjectCollectionBase_KeysCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase_KeysCollection {
        inline app::NameObjectCollectionBase_KeysCollection__Class** type_info() {
            static app::NameObjectCollectionBase_KeysCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NameObjectCollectionBase_KeysCollection__Class**)(modloader::win::memory::resolve_rva(0x04732560));
            }
            return cache;
        }
        inline app::NameObjectCollectionBase_KeysCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::NameObjectCollectionBase_KeysCollection__Class>(type_info(), "System.Collections.Specialized", "NameObjectCollectionBase", "KeysCollection");
        }
        inline app::NameObjectCollectionBase_KeysCollection* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase_KeysCollection>(get_class());
        }
    } // namespace NameObjectCollectionBase_KeysCollection
} // namespace app::classes::types
