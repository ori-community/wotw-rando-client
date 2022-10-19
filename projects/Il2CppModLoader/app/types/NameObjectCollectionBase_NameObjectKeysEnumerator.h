#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase_NameObjectKeysEnumerator {
        inline app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class** type_info = (app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04720798));
        inline app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::NameObjectCollectionBase_NameObjectKeysEnumerator__Class>(type_info, "System.Collections.Specialized", "NameObjectCollectionBase", "NameObjectKeysEnumerator");
        }
        inline app::NameObjectCollectionBase_NameObjectKeysEnumerator* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase_NameObjectKeysEnumerator>(get_class());
        }
    } // namespace NameObjectCollectionBase_NameObjectKeysEnumerator
} // namespace app::classes::types
