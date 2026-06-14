#pragma once
#include <Modloader/app/structs/WeakReference__Array.h>
#include <Modloader/app/structs/WeakReference__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeakReference__Array {
        inline app::WeakReference__Array__Class** type_info() {
            static app::WeakReference__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeakReference__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeakReference__Array__Class* get_class() {
            return il2cpp::get_class<app::WeakReference__Array__Class>(type_info(), "System", "WeakReference[]");
        }
        inline app::WeakReference__Array* create() {
            return il2cpp::create_object<app::WeakReference__Array>(get_class());
        }
    } // namespace WeakReference__Array
} // namespace app::classes::types
