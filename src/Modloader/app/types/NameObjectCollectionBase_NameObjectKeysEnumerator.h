#pragma once
#include <Modloader/app/structs/NameObjectCollectionBase_NameObjectKeysEnumerator.h>
#include <Modloader/app/structs/NameObjectCollectionBase_NameObjectKeysEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase_NameObjectKeysEnumerator {
        inline app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class** type_info() {
            static app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04720798));
            }
            return cache;
        }
        inline app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class>(type_info(), "System.Collections.Specialized", "NameObjectCollectionBase", "NameObjectKeysEnumerator");
        }
        inline app::NameObjectCollectionBase_NameObjectKeysEnumerator* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase_NameObjectKeysEnumerator>(get_class());
        }
    } // namespace NameObjectCollectionBase_NameObjectKeysEnumerator
} // namespace app::classes::types
