#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Hashtable_ValueCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Hashtable_ValueCollection__Class** type_info;
        inline app::Hashtable_ValueCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_ValueCollection__Class>(type_info, "System.Collections", "Hashtable", "ValueCollection");
        }
        inline app::Hashtable_ValueCollection* create() {
            return il2cpp::create_object<app::Hashtable_ValueCollection>(get_class());
        }
    } // namespace Hashtable_ValueCollection
} // namespace app::classes::types
