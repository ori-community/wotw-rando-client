#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase_NameObjectEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameObjectCollectionBase_NameObjectEntry__Class** type_info;
        inline app::NameObjectCollectionBase_NameObjectEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::NameObjectCollectionBase_NameObjectEntry__Class>(type_info, "System.Collections.Specialized", "NameObjectCollectionBase", "NameObjectEntry");
        }
        inline app::NameObjectCollectionBase_NameObjectEntry* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase_NameObjectEntry>(get_class());
        }
    } // namespace NameObjectCollectionBase_NameObjectEntry
} // namespace app::classes::types
