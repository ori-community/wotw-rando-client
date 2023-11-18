#pragma once
#include <Modloader/app/structs/EntityData_EntityPosition__Array.h>
#include <Modloader/app/structs/EntityData_EntityPosition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityData_EntityPosition__Array {
        inline app::EntityData_EntityPosition__Array__Class** type_info() {
            static app::EntityData_EntityPosition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityData_EntityPosition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityData_EntityPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityData_EntityPosition__Array__Class>(type_info(), "", "EntityData+EntityPosition[]");
        }
        inline app::EntityData_EntityPosition__Array* create() {
            return il2cpp::create_object<app::EntityData_EntityPosition__Array>(get_class());
        }
    } // namespace EntityData_EntityPosition__Array
} // namespace app::classes::types
