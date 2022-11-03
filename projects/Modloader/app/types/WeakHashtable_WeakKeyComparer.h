#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeakHashtable_WeakKeyComparer {
        inline app::WeakHashtable_WeakKeyComparer__Class** type_info = (app::WeakHashtable_WeakKeyComparer__Class**)(modloader::win::memory::resolve_rva(0x0470F5B0));
        inline app::WeakHashtable_WeakKeyComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::WeakHashtable_WeakKeyComparer__Class>(type_info, "System.ComponentModel", "WeakHashtable", "WeakKeyComparer");
        }
        inline app::WeakHashtable_WeakKeyComparer* create() {
            return il2cpp::create_object<app::WeakHashtable_WeakKeyComparer>(get_class());
        }
    } // namespace WeakHashtable_WeakKeyComparer
} // namespace app::classes::types
