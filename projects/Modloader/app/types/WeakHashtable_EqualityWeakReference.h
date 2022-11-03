#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeakHashtable_EqualityWeakReference {
        inline app::WeakHashtable_EqualityWeakReference__Class** type_info = (app::WeakHashtable_EqualityWeakReference__Class**)(modloader::win::memory::resolve_rva(0x0470BE58));
        inline app::WeakHashtable_EqualityWeakReference__Class* get_class() {
            return il2cpp::get_nested_class<app::WeakHashtable_EqualityWeakReference__Class>(type_info, "System.ComponentModel", "WeakHashtable", "EqualityWeakReference");
        }
        inline app::WeakHashtable_EqualityWeakReference* create() {
            return il2cpp::create_object<app::WeakHashtable_EqualityWeakReference>(get_class());
        }
    } // namespace WeakHashtable_EqualityWeakReference
} // namespace app::classes::types
