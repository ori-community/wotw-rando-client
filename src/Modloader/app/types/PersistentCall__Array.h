#pragma once
#include <Modloader/app/structs/PersistentCall__Array.h>
#include <Modloader/app/structs/PersistentCall__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PersistentCall__Array {
        inline app::PersistentCall__Array__Class** type_info() {
            static app::PersistentCall__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PersistentCall__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PersistentCall__Array__Class* get_class() {
            return il2cpp::get_class<app::PersistentCall__Array__Class>(type_info(), "UnityEngine.Events", "PersistentCall[]");
        }
        inline app::PersistentCall__Array* create() {
            return il2cpp::create_object<app::PersistentCall__Array>(get_class());
        }
    } // namespace PersistentCall__Array
} // namespace app::classes::types
