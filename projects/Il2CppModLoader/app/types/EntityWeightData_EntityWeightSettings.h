#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityWeightData_EntityWeightSettings {
        namespace {
            app::EntityWeightData_EntityWeightSettings__Class* type_info_ref = nullptr;
        }
        app::EntityWeightData_EntityWeightSettings__Class** type_info = &type_info_ref;
        inline app::EntityWeightData_EntityWeightSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityWeightData_EntityWeightSettings__Class>(type_info, "", "EntityWeightData", "EntityWeightSettings");
        }
        inline app::EntityWeightData_EntityWeightSettings* create() {
            return il2cpp::create_object<app::EntityWeightData_EntityWeightSettings>(get_class());
        }
        inline app::EntityWeightData_EntityWeightSettings__Boxed* box(app::EntityWeightData_EntityWeightSettings value) {
            return il2cpp::box_value<app::EntityWeightData_EntityWeightSettings__Boxed>(get_class(), value);
        }
        inline app::EntityWeightData_EntityWeightSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityWeightData_EntityWeightSettings__Array>(get_class(), size);
        }
        inline app::EntityWeightData_EntityWeightSettings__Array* create_array(const std::vector<app::EntityWeightData_EntityWeightSettings__Boxed>& items) {
            return il2cpp::array_new<app::EntityWeightData_EntityWeightSettings__Array>(get_class(), items);
        }
    } // namespace EntityWeightData_EntityWeightSettings
} // namespace app::classes::types
