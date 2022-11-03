#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Entity_EntityState__Enum {
        inline app::Entity_EntityState__Enum__Class** type_info = (app::Entity_EntityState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04721B10));
        inline app::Entity_EntityState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Entity_EntityState__Enum__Class>(type_info, "Moon", "Entity", "EntityState");
        }
        inline app::Entity_EntityState__Enum* create() {
            return il2cpp::create_object<app::Entity_EntityState__Enum>(get_class());
        }
    } // namespace Entity_EntityState__Enum
} // namespace app::classes::types
