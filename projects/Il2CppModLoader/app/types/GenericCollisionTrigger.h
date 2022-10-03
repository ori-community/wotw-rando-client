#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericCollisionTrigger {
        namespace {
            app::GenericCollisionTrigger__Class* type_info_ref = nullptr;
        }
        app::GenericCollisionTrigger__Class** type_info = &type_info_ref;
        inline app::GenericCollisionTrigger__Class* get_class() {
            return il2cpp::get_class<app::GenericCollisionTrigger__Class>(type_info, "", "GenericCollisionTrigger");
        }
        inline app::GenericCollisionTrigger* create() {
            return il2cpp::create_object<app::GenericCollisionTrigger>(get_class());
        }
    } // namespace GenericCollisionTrigger
} // namespace app::classes::types
