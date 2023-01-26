#pragma once
#include <Modloader/app/structs/Hashtable_HashtableEnumerator.h>
#include <Modloader/app/structs/Hashtable_HashtableEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Hashtable_HashtableEnumerator {
        inline app::Hashtable_HashtableEnumerator__Class** type_info() {
            static app::Hashtable_HashtableEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Hashtable_HashtableEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04761F08));
            }
            return cache;
        }
        inline app::Hashtable_HashtableEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_HashtableEnumerator__Class>(type_info(), "System.Collections", "Hashtable", "HashtableEnumerator");
        }
        inline app::Hashtable_HashtableEnumerator* create() {
            return il2cpp::create_object<app::Hashtable_HashtableEnumerator>(get_class());
        }
    } // namespace Hashtable_HashtableEnumerator
} // namespace app::classes::types
