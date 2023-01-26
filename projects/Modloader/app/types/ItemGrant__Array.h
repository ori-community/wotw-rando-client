#pragma once
#include <Modloader/app/structs/ItemGrant__Array.h>
#include <Modloader/app/structs/ItemGrant__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ItemGrant__Array {
        inline app::ItemGrant__Array__Class** type_info() {
            static app::ItemGrant__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ItemGrant__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ItemGrant__Array__Class* get_class() {
            return il2cpp::get_class<app::ItemGrant__Array__Class>(type_info(), "PlayFab.ServerModels", "ItemGrant[]");
        }
        inline app::ItemGrant__Array* create() {
            return il2cpp::create_object<app::ItemGrant__Array>(get_class());
        }
    } // namespace ItemGrant__Array
} // namespace app::classes::types
