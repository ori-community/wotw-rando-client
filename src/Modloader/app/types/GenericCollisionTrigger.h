#pragma once
#include <Modloader/app/structs/GenericCollisionTrigger.h>
#include <Modloader/app/structs/GenericCollisionTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericCollisionTrigger {
        inline app::GenericCollisionTrigger__Class** type_info() {
            static app::GenericCollisionTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericCollisionTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericCollisionTrigger__Class* get_class() {
            return il2cpp::get_class<app::GenericCollisionTrigger__Class>(type_info(), "", "GenericCollisionTrigger");
        }
        inline app::GenericCollisionTrigger* create() {
            return il2cpp::create_object<app::GenericCollisionTrigger>(get_class());
        }
    } // namespace GenericCollisionTrigger
} // namespace app::classes::types
