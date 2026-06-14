#pragma once
#include <Modloader/app/structs/StoreItem__Array.h>
#include <Modloader/app/structs/StoreItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StoreItem__Array {
        inline app::StoreItem__Array__Class** type_info() {
            static app::StoreItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StoreItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StoreItem__Array__Class* get_class() {
            return il2cpp::get_class<app::StoreItem__Array__Class>(type_info(), "PlayFab.ClientModels", "StoreItem[]");
        }
        inline app::StoreItem__Array* create() {
            return il2cpp::create_object<app::StoreItem__Array>(get_class());
        }
    } // namespace StoreItem__Array
} // namespace app::classes::types
