#pragma once
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityEvent {
        inline app::EntityEvent__Class** type_info() {
            static app::EntityEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityEvent__Class* get_class() {
            return il2cpp::get_class<app::EntityEvent__Class>(type_info(), "Moon", "EntityEvent");
        }
        inline app::EntityEvent* create() {
            return il2cpp::create_object<app::EntityEvent>(get_class());
        }
    } // namespace EntityEvent
} // namespace app::classes::types
