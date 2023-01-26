#pragma once
#include <Modloader/app/structs/EntityKey_5.h>
#include <Modloader/app/structs/EntityKey_5__Array.h>
#include <Modloader/app/structs/EntityKey_5__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityKey_5 {
        inline app::EntityKey_5__Class** type_info() {
            static app::EntityKey_5__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityKey_5__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityKey_5__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_5__Class>(type_info(), "PlayFab.GroupsModels", "EntityKey");
        }
        inline app::EntityKey_5* create() {
            return il2cpp::create_object<app::EntityKey_5>(get_class());
        }
        inline app::EntityKey_5__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityKey_5__Array>(get_class(), size);
        }
        inline app::EntityKey_5__Array* create_array(const std::vector<app::EntityKey_5*>& items) {
            return il2cpp::array_new<app::EntityKey_5__Array>(get_class(), items);
        }
    } // namespace EntityKey_5
} // namespace app::classes::types
