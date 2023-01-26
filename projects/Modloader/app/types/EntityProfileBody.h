#pragma once
#include <Modloader/app/structs/EntityProfileBody.h>
#include <Modloader/app/structs/EntityProfileBody__Array.h>
#include <Modloader/app/structs/EntityProfileBody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityProfileBody {
        inline app::EntityProfileBody__Class** type_info() {
            static app::EntityProfileBody__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityProfileBody__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityProfileBody__Class* get_class() {
            return il2cpp::get_class<app::EntityProfileBody__Class>(type_info(), "PlayFab.ProfilesModels", "EntityProfileBody");
        }
        inline app::EntityProfileBody* create() {
            return il2cpp::create_object<app::EntityProfileBody>(get_class());
        }
        inline app::EntityProfileBody__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityProfileBody__Array>(get_class(), size);
        }
        inline app::EntityProfileBody__Array* create_array(const std::vector<app::EntityProfileBody*>& items) {
            return il2cpp::array_new<app::EntityProfileBody__Array>(get_class(), items);
        }
    } // namespace EntityProfileBody
} // namespace app::classes::types
