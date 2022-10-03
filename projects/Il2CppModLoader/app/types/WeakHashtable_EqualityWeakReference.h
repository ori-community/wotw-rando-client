#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeakHashtable_EqualityWeakReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WeakHashtable_EqualityWeakReference__Class** type_info;
        inline app::WeakHashtable_EqualityWeakReference__Class* get_class() {
            return il2cpp::get_nested_class<app::WeakHashtable_EqualityWeakReference__Class>(type_info, "System.ComponentModel", "WeakHashtable", "EqualityWeakReference");
        }
        inline app::WeakHashtable_EqualityWeakReference* create() {
            return il2cpp::create_object<app::WeakHashtable_EqualityWeakReference>(get_class());
        }
    } // namespace WeakHashtable_EqualityWeakReference
} // namespace app::classes::types
