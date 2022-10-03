#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase_NameObjectKeysEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class** type_info;
        inline app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class>(type_info, "System.Collections.Specialized", "NameObjectCollectionBase", "NameObjectKeysEnumerator");
        }
        inline app::NameObjectCollectionBase_NameObjectKeysEnumerator* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase_NameObjectKeysEnumerator>(get_class());
        }
    } // namespace NameObjectCollectionBase_NameObjectKeysEnumerator
} // namespace app::classes::types
