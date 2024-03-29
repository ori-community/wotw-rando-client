#pragma once
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings__Array.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings__Boxed.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityWeightData_EntityWeightSettings {
        inline app::EntityWeightData_EntityWeightSettings__Class** type_info() {
            static app::EntityWeightData_EntityWeightSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityWeightData_EntityWeightSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityWeightData_EntityWeightSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityWeightData_EntityWeightSettings__Class>(type_info(), "", "EntityWeightData", "EntityWeightSettings");
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
        inline app::EntityWeightData_EntityWeightSettings__Array* create_array(const std::vector<app::EntityWeightData_EntityWeightSettings>& items) {
            return il2cpp::array_new<app::EntityWeightData_EntityWeightSettings__Array>(get_class(), items);
        }
    } // namespace EntityWeightData_EntityWeightSettings
} // namespace app::classes::types
