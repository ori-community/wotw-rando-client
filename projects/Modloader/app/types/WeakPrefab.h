#pragma once
#include <Modloader/app/structs/WeakPrefab.h>
#include <Modloader/app/structs/WeakPrefab__Array.h>
#include <Modloader/app/structs/WeakPrefab__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeakPrefab {
        inline app::WeakPrefab__Class** type_info() {
            static app::WeakPrefab__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeakPrefab__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeakPrefab__Class* get_class() {
            return il2cpp::get_class<app::WeakPrefab__Class>(type_info(), "", "WeakPrefab");
        }
        inline app::WeakPrefab* create() {
            return il2cpp::create_object<app::WeakPrefab>(get_class());
        }
        inline app::WeakPrefab__Array* create_array(int size) {
            return il2cpp::array_new<app::WeakPrefab__Array>(get_class(), size);
        }
        inline app::WeakPrefab__Array* create_array(const std::vector<app::WeakPrefab*>& items) {
            return il2cpp::array_new<app::WeakPrefab__Array>(get_class(), items);
        }
    } // namespace WeakPrefab
} // namespace app::classes::types
