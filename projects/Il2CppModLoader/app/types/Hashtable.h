#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Hashtable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Hashtable__Class** type_info;
        inline app::Hashtable__Class* get_class() {
            return il2cpp::get_class<app::Hashtable__Class>(type_info, "System.Collections", "Hashtable");
        }
        inline app::Hashtable* create() {
            return il2cpp::create_object<app::Hashtable>(get_class());
        }
    } // namespace Hashtable
} // namespace app::classes::types
