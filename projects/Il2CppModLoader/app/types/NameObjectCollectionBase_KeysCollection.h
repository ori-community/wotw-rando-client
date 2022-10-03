#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase_KeysCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameObjectCollectionBase_KeysCollection__Class** type_info;
        inline app::NameObjectCollectionBase_KeysCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::NameObjectCollectionBase_KeysCollection__Class>(type_info, "System.Collections.Specialized", "NameObjectCollectionBase", "KeysCollection");
        }
        inline app::NameObjectCollectionBase_KeysCollection* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase_KeysCollection>(get_class());
        }
    } // namespace NameObjectCollectionBase_KeysCollection
} // namespace app::classes::types
