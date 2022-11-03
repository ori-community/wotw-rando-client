#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase_NameObjectEntry {
        inline app::NameObjectCollectionBase_NameObjectEntry__Class** type_info = (app::NameObjectCollectionBase_NameObjectEntry__Class**)(modloader::win::memory::resolve_rva(0x047262C0));
        inline app::NameObjectCollectionBase_NameObjectEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::NameObjectCollectionBase_NameObjectEntry__Class>(type_info, "System.Collections.Specialized", "NameObjectCollectionBase", "NameObjectEntry");
        }
        inline app::NameObjectCollectionBase_NameObjectEntry* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase_NameObjectEntry>(get_class());
        }
    } // namespace NameObjectCollectionBase_NameObjectEntry
} // namespace app::classes::types
