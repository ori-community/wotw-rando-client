#pragma once
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings__Array.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityWeightData_EntityWeightSettings__Array {
        inline app::EntityWeightData_EntityWeightSettings__Array__Class** type_info() {
            static app::EntityWeightData_EntityWeightSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityWeightData_EntityWeightSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityWeightData_EntityWeightSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityWeightData_EntityWeightSettings__Array__Class>(type_info(), "", "EntityWeightData+EntityWeightSettings[]");
        }
        inline app::EntityWeightData_EntityWeightSettings__Array* create() {
            return il2cpp::create_object<app::EntityWeightData_EntityWeightSettings__Array>(get_class());
        }
    } // namespace EntityWeightData_EntityWeightSettings__Array
} // namespace app::classes::types
