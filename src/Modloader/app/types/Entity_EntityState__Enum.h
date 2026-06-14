#pragma once
#include <Modloader/app/structs/Entity_EntityState__Enum.h>
#include <Modloader/app/structs/Entity_EntityState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Entity_EntityState__Enum {
        inline app::Entity_EntityState__Enum__Class** type_info() {
            static app::Entity_EntityState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Entity_EntityState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04721B10));
            }
            return cache;
        }
        inline app::Entity_EntityState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Entity_EntityState__Enum__Class>(type_info(), "Moon", "Entity", "EntityState");
        }
        inline app::Entity_EntityState__Enum* create() {
            return il2cpp::create_object<app::Entity_EntityState__Enum>(get_class());
        }
    } // namespace Entity_EntityState__Enum
} // namespace app::classes::types
