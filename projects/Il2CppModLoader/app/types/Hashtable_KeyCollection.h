#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Hashtable_KeyCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Hashtable_KeyCollection__Class** type_info;
        inline app::Hashtable_KeyCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_KeyCollection__Class>(type_info, "System.Collections", "Hashtable", "KeyCollection");
        }
        inline app::Hashtable_KeyCollection* create() {
            return il2cpp::create_object<app::Hashtable_KeyCollection>(get_class());
        }
    } // namespace Hashtable_KeyCollection
} // namespace app::classes::types
