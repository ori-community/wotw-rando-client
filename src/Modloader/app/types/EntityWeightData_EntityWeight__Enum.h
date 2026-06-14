#pragma once
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum__Array.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityWeightData_EntityWeight__Enum {
        inline app::EntityWeightData_EntityWeight__Enum__Class** type_info() {
            static app::EntityWeightData_EntityWeight__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityWeightData_EntityWeight__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityWeightData_EntityWeight__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityWeightData_EntityWeight__Enum__Class>(type_info(), "", "EntityWeightData", "EntityWeight");
        }
        inline app::EntityWeightData_EntityWeight__Enum* create() {
            return il2cpp::create_object<app::EntityWeightData_EntityWeight__Enum>(get_class());
        }
        inline app::EntityWeightData_EntityWeight__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityWeightData_EntityWeight__Enum__Array>(get_class(), size);
        }
        inline app::EntityWeightData_EntityWeight__Enum__Array* create_array(const std::vector<app::EntityWeightData_EntityWeight__Enum*>& items) {
            return il2cpp::array_new<app::EntityWeightData_EntityWeight__Enum__Array>(get_class(), items);
        }
    } // namespace EntityWeightData_EntityWeight__Enum
} // namespace app::classes::types
