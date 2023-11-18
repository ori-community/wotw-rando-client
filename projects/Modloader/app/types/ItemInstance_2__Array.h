#pragma once
#include <Modloader/app/structs/ItemInstance_2__Array.h>
#include <Modloader/app/structs/ItemInstance_2__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ItemInstance_2__Array {
        inline app::ItemInstance_2__Array__Class** type_info() {
            static app::ItemInstance_2__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ItemInstance_2__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ItemInstance_2__Array__Class* get_class() {
            return il2cpp::get_class<app::ItemInstance_2__Array__Class>(type_info(), "PlayFab.ServerModels", "ItemInstance[]");
        }
        inline app::ItemInstance_2__Array* create() {
            return il2cpp::create_object<app::ItemInstance_2__Array>(get_class());
        }
    } // namespace ItemInstance_2__Array
} // namespace app::classes::types
