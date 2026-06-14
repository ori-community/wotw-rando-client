#pragma once
#include <Modloader/app/structs/WeakHashtable_WeakKeyComparer.h>
#include <Modloader/app/structs/WeakHashtable_WeakKeyComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeakHashtable_WeakKeyComparer {
        inline app::WeakHashtable_WeakKeyComparer__Class** type_info() {
            static app::WeakHashtable_WeakKeyComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WeakHashtable_WeakKeyComparer__Class**)(modloader::win::memory::resolve_rva(0x0470F5B0));
            }
            return cache;
        }
        inline app::WeakHashtable_WeakKeyComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::WeakHashtable_WeakKeyComparer__Class>(type_info(), "System.ComponentModel", "WeakHashtable", "WeakKeyComparer");
        }
        inline app::WeakHashtable_WeakKeyComparer* create() {
            return il2cpp::create_object<app::WeakHashtable_WeakKeyComparer>(get_class());
        }
    } // namespace WeakHashtable_WeakKeyComparer
} // namespace app::classes::types
