#pragma once
#include <Modloader/app/structs/NameObjectCollectionBase_NameObjectEntry.h>
#include <Modloader/app/structs/NameObjectCollectionBase_NameObjectEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase_NameObjectEntry {
        inline app::NameObjectCollectionBase_NameObjectEntry__Class** type_info() {
            static app::NameObjectCollectionBase_NameObjectEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NameObjectCollectionBase_NameObjectEntry__Class**)(modloader::win::memory::resolve_rva(0x047262C0));
            }
            return cache;
        }
        inline app::NameObjectCollectionBase_NameObjectEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::NameObjectCollectionBase_NameObjectEntry__Class>(type_info(), "System.Collections.Specialized", "NameObjectCollectionBase", "NameObjectEntry");
        }
        inline app::NameObjectCollectionBase_NameObjectEntry* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase_NameObjectEntry>(get_class());
        }
    } // namespace NameObjectCollectionBase_NameObjectEntry
} // namespace app::classes::types
