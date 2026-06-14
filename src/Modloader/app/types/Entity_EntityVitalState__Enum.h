#pragma once
#include <Modloader/app/structs/Entity_EntityVitalState__Enum.h>
#include <Modloader/app/structs/Entity_EntityVitalState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Entity_EntityVitalState__Enum {
        inline app::Entity_EntityVitalState__Enum__Class** type_info() {
            static app::Entity_EntityVitalState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Entity_EntityVitalState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04794CC0));
            }
            return cache;
        }
        inline app::Entity_EntityVitalState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Entity_EntityVitalState__Enum__Class>(type_info(), "Moon", "Entity", "EntityVitalState");
        }
        inline app::Entity_EntityVitalState__Enum* create() {
            return il2cpp::create_object<app::Entity_EntityVitalState__Enum>(get_class());
        }
    } // namespace Entity_EntityVitalState__Enum
} // namespace app::classes::types
