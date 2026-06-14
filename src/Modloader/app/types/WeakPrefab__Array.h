#pragma once
#include <Modloader/app/structs/WeakPrefab__Array.h>
#include <Modloader/app/structs/WeakPrefab__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeakPrefab__Array {
        inline app::WeakPrefab__Array__Class** type_info() {
            static app::WeakPrefab__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeakPrefab__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeakPrefab__Array__Class* get_class() {
            return il2cpp::get_class<app::WeakPrefab__Array__Class>(type_info(), "", "WeakPrefab[]");
        }
        inline app::WeakPrefab__Array* create() {
            return il2cpp::create_object<app::WeakPrefab__Array>(get_class());
        }
    } // namespace WeakPrefab__Array
} // namespace app::classes::types
