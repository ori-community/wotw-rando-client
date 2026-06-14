#pragma once
#include <Modloader/app/structs/EntityKey_9.h>
#include <Modloader/app/structs/EntityKey_9__Array.h>
#include <Modloader/app/structs/EntityKey_9__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityKey_9 {
        inline app::EntityKey_9__Class** type_info() {
            static app::EntityKey_9__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityKey_9__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityKey_9__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_9__Class>(type_info(), "PlayFab.PlayStreamModels", "EntityKey");
        }
        inline app::EntityKey_9* create() {
            return il2cpp::create_object<app::EntityKey_9>(get_class());
        }
        inline app::EntityKey_9__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityKey_9__Array>(get_class(), size);
        }
        inline app::EntityKey_9__Array* create_array(const std::vector<app::EntityKey_9*>& items) {
            return il2cpp::array_new<app::EntityKey_9__Array>(get_class(), items);
        }
    } // namespace EntityKey_9
} // namespace app::classes::types
