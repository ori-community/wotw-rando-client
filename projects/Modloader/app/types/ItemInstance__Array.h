#pragma once
#include <Modloader/app/structs/ItemInstance__Array.h>
#include <Modloader/app/structs/ItemInstance__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ItemInstance__Array {
        inline app::ItemInstance__Array__Class** type_info() {
            static app::ItemInstance__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ItemInstance__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ItemInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::ItemInstance__Array__Class>(type_info(), "PlayFab.ClientModels", "ItemInstance[]");
        }
        inline app::ItemInstance__Array* create() {
            return il2cpp::create_object<app::ItemInstance__Array>(get_class());
        }
    } // namespace ItemInstance__Array
} // namespace app::classes::types
