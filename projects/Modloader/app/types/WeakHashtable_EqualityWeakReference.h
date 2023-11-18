#pragma once
#include <Modloader/app/structs/WeakHashtable_EqualityWeakReference.h>
#include <Modloader/app/structs/WeakHashtable_EqualityWeakReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeakHashtable_EqualityWeakReference {
        inline app::WeakHashtable_EqualityWeakReference__Class** type_info() {
            static app::WeakHashtable_EqualityWeakReference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WeakHashtable_EqualityWeakReference__Class**)(modloader::win::memory::resolve_rva(0x0470BE58));
            }
            return cache;
        }
        inline app::WeakHashtable_EqualityWeakReference__Class* get_class() {
            return il2cpp::get_nested_class<app::WeakHashtable_EqualityWeakReference__Class>(type_info(), "System.ComponentModel", "WeakHashtable", "EqualityWeakReference");
        }
        inline app::WeakHashtable_EqualityWeakReference* create() {
            return il2cpp::create_object<app::WeakHashtable_EqualityWeakReference>(get_class());
        }
    } // namespace WeakHashtable_EqualityWeakReference
} // namespace app::classes::types
