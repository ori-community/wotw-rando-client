#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Hashtable_SyncHashtable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Hashtable_SyncHashtable__Class** type_info;
        inline app::Hashtable_SyncHashtable__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_SyncHashtable__Class>(type_info, "System.Collections", "Hashtable", "SyncHashtable");
        }
        inline app::Hashtable_SyncHashtable* create() {
            return il2cpp::create_object<app::Hashtable_SyncHashtable>(get_class());
        }
    } // namespace Hashtable_SyncHashtable
} // namespace app::classes::types
