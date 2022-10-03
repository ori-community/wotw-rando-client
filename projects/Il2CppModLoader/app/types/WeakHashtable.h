#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeakHashtable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WeakHashtable__Class** type_info;
        inline app::WeakHashtable__Class* get_class() {
            return il2cpp::get_class<app::WeakHashtable__Class>(type_info, "System.ComponentModel", "WeakHashtable");
        }
        inline app::WeakHashtable* create() {
            return il2cpp::create_object<app::WeakHashtable>(get_class());
        }
    } // namespace WeakHashtable
} // namespace app::classes::types
