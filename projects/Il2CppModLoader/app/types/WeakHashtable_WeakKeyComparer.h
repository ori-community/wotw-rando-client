#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeakHashtable_WeakKeyComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WeakHashtable_WeakKeyComparer__Class** type_info;
        inline app::WeakHashtable_WeakKeyComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::WeakHashtable_WeakKeyComparer__Class>(type_info, "System.ComponentModel", "WeakHashtable", "WeakKeyComparer");
        }
        inline app::WeakHashtable_WeakKeyComparer* create() {
            return il2cpp::create_object<app::WeakHashtable_WeakKeyComparer>(get_class());
        }
    } // namespace WeakHashtable_WeakKeyComparer
} // namespace app::classes::types
