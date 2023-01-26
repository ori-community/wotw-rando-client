#pragma once
#include <Modloader/app/structs/GrantedItemInstance__Array.h>
#include <Modloader/app/structs/GrantedItemInstance__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrantedItemInstance__Array {
        inline app::GrantedItemInstance__Array__Class** type_info() {
            static app::GrantedItemInstance__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrantedItemInstance__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrantedItemInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::GrantedItemInstance__Array__Class>(type_info(), "PlayFab.ServerModels", "GrantedItemInstance[]");
        }
        inline app::GrantedItemInstance__Array* create() {
            return il2cpp::create_object<app::GrantedItemInstance__Array>(get_class());
        }
    } // namespace GrantedItemInstance__Array
} // namespace app::classes::types
