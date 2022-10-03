#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericDamageTrigger {
        namespace {
            app::GenericDamageTrigger__Class* type_info_ref = nullptr;
        }
        app::GenericDamageTrigger__Class** type_info = &type_info_ref;
        inline app::GenericDamageTrigger__Class* get_class() {
            return il2cpp::get_class<app::GenericDamageTrigger__Class>(type_info, "", "GenericDamageTrigger");
        }
        inline app::GenericDamageTrigger* create() {
            return il2cpp::create_object<app::GenericDamageTrigger>(get_class());
        }
    } // namespace GenericDamageTrigger
} // namespace app::classes::types
