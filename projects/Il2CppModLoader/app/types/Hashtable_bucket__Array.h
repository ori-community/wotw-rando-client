#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Hashtable_bucket__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Hashtable_bucket__Array__Class** type_info;
        inline app::Hashtable_bucket__Array__Class* get_class() {
            return il2cpp::get_class<app::Hashtable_bucket__Array__Class>(type_info, "System.Collections", "Hashtable+bucket[]");
        }
        inline app::Hashtable_bucket__Array* create() {
            return il2cpp::create_object<app::Hashtable_bucket__Array>(get_class());
        }
    } // namespace Hashtable_bucket__Array
} // namespace app::classes::types
