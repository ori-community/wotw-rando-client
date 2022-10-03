#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalComboDefinition {
        namespace {
            app::GlobalComboDefinition__Class* type_info_ref = nullptr;
        }
        app::GlobalComboDefinition__Class** type_info = &type_info_ref;
        inline app::GlobalComboDefinition__Class* get_class() {
            return il2cpp::get_class<app::GlobalComboDefinition__Class>(type_info, "Moon.ComboSystem", "GlobalComboDefinition");
        }
        inline app::GlobalComboDefinition* create() {
            return il2cpp::create_object<app::GlobalComboDefinition>(get_class());
        }
    } // namespace GlobalComboDefinition
} // namespace app::classes::types
