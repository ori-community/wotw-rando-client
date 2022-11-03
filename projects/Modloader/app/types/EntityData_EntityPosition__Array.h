#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityData_EntityPosition__Array {
        namespace {
            inline app::EntityData_EntityPosition__Array__Class* type_info_ref = nullptr;
        }
        inline app::EntityData_EntityPosition__Array__Class** type_info = &type_info_ref;
        inline app::EntityData_EntityPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityData_EntityPosition__Array__Class>(type_info, "", "EntityData+EntityPosition[]");
        }
        inline app::EntityData_EntityPosition__Array* create() {
            return il2cpp::create_object<app::EntityData_EntityPosition__Array>(get_class());
        }
    } // namespace EntityData_EntityPosition__Array
} // namespace app::classes::types
