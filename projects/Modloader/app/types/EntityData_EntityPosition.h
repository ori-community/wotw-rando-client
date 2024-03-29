#pragma once
#include <Modloader/app/structs/EntityData_EntityPosition.h>
#include <Modloader/app/structs/EntityData_EntityPosition__Array.h>
#include <Modloader/app/structs/EntityData_EntityPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityData_EntityPosition {
        inline app::EntityData_EntityPosition__Class** type_info() {
            static app::EntityData_EntityPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityData_EntityPosition__Class**)(modloader::win::memory::resolve_rva(0x04761338));
            }
            return cache;
        }
        inline app::EntityData_EntityPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityData_EntityPosition__Class>(type_info(), "", "EntityData", "EntityPosition");
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
