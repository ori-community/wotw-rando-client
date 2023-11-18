#pragma once
#include <Modloader/app/structs/Hashtable_bucket__Array.h>
#include <Modloader/app/structs/Hashtable_bucket__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Hashtable_bucket__Array {
        inline app::Hashtable_bucket__Array__Class** type_info() {
            static app::Hashtable_bucket__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Hashtable_bucket__Array__Class**)(modloader::win::memory::resolve_rva(0x04791CE8));
            }
            return cache;
        }
        inline app::Hashtable_bucket__Array__Class* get_class() {
            return il2cpp::get_class<app::Hashtable_bucket__Array__Class>(type_info(), "System.Collections", "Hashtable+bucket[]");
        }
        inline app::Hashtable_bucket__Array* create() {
            return il2cpp::create_object<app::Hashtable_bucket__Array>(get_class());
        }
    } // namespace Hashtable_bucket__Array
} // namespace app::classes::types
