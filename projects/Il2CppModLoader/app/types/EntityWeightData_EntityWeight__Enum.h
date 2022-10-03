#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityWeightData_EntityWeight__Enum {
        namespace {
            app::EntityWeightData_EntityWeight__Enum__Class* type_info_ref = nullptr;
        }
        app::EntityWeightData_EntityWeight__Enum__Class** type_info = &type_info_ref;
        inline app::EntityWeightData_EntityWeight__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityWeightData_EntityWeight__Enum__Class>(type_info, "", "EntityWeightData", "EntityWeight");
        }
        inline app::EntityWeightData_EntityWeight__Enum* create() {
            return il2cpp::create_object<app::EntityWeightData_EntityWeight__Enum>(get_class());
        }
        inline app::EntityWeightData_EntityWeight__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityWeightData_EntityWeight__Enum__Array>(get_class(), size);
        }
    } // namespace EntityWeightData_EntityWeight__Enum
} // namespace app::classes::types
