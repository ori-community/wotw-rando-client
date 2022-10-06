#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityData_EntityPosition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityData_EntityPosition__Class** type_info;
        inline app::EntityData_EntityPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityData_EntityPosition__Class>(type_info, "", "EntityData", "EntityPosition");
        }
        inline app::EntityData_EntityPosition* create() {
            return il2cpp::create_object<app::EntityData_EntityPosition>(get_class());
        }
        inline app::EntityData_EntityPosition__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityData_EntityPosition__Array>(get_class(), size);
        }
        inline app::EntityData_EntityPosition__Array* create_array(const std::vector<app::EntityData_EntityPosition*>& items) {
            return il2cpp::array_new<app::EntityData_EntityPosition__Array>(get_class(), items);
        }
    } // namespace EntityData_EntityPosition
} // namespace app::classes::types
