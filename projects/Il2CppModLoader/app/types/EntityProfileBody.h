#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityProfileBody {
        namespace {
            inline app::EntityProfileBody__Class* type_info_ref = nullptr;
        }
        inline app::EntityProfileBody__Class** type_info = &type_info_ref;
        inline app::EntityProfileBody__Class* get_class() {
            return il2cpp::get_class<app::EntityProfileBody__Class>(type_info, "PlayFab.ProfilesModels", "EntityProfileBody");
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
