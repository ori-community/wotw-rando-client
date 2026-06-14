#pragma once
#include <Modloader/app/structs/GenericDamageTrigger.h>
#include <Modloader/app/structs/GenericDamageTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericDamageTrigger {
        inline app::GenericDamageTrigger__Class** type_info() {
            static app::GenericDamageTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericDamageTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericDamageTrigger__Class* get_class() {
            return il2cpp::get_class<app::GenericDamageTrigger__Class>(type_info(), "", "GenericDamageTrigger");
        }
        inline app::GenericDamageTrigger* create() {
            return il2cpp::create_object<app::GenericDamageTrigger>(get_class());
        }
    } // namespace GenericDamageTrigger
} // namespace app::classes::types
