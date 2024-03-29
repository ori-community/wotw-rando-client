#pragma once
#include <Modloader/app/structs/Hashtable_SyncHashtable.h>
#include <Modloader/app/structs/Hashtable_SyncHashtable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Hashtable_SyncHashtable {
        inline app::Hashtable_SyncHashtable__Class** type_info() {
            static app::Hashtable_SyncHashtable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Hashtable_SyncHashtable__Class**)(modloader::win::memory::resolve_rva(0x04734518));
            }
            return cache;
        }
        inline app::Hashtable_SyncHashtable__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_SyncHashtable__Class>(type_info(), "System.Collections", "Hashtable", "SyncHashtable");
        }
        inline app::Hashtable_SyncHashtable* create() {
            return il2cpp::create_object<app::Hashtable_SyncHashtable>(get_class());
        }
    } // namespace Hashtable_SyncHashtable
} // namespace app::classes::types
