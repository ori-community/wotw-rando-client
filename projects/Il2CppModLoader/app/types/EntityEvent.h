#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityEvent {
        namespace {
            app::EntityEvent__Class* type_info_ref = nullptr;
        }
        app::EntityEvent__Class** type_info = &type_info_ref;
        inline app::EntityEvent__Class* get_class() {
            return il2cpp::get_class<app::EntityEvent__Class>(type_info, "Moon", "EntityEvent");
        }
        inline app::EntityEvent* create() {
            return il2cpp::create_object<app::EntityEvent>(get_class());
        }
    } // namespace EntityEvent
} // namespace app::classes::types
