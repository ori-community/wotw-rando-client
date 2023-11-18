#pragma once
#include <Modloader/app/structs/GlobalComboDefinition.h>
#include <Modloader/app/structs/GlobalComboDefinition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalComboDefinition {
        inline app::GlobalComboDefinition__Class** type_info() {
            static app::GlobalComboDefinition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlobalComboDefinition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlobalComboDefinition__Class* get_class() {
            return il2cpp::get_class<app::GlobalComboDefinition__Class>(type_info(), "Moon.ComboSystem", "GlobalComboDefinition");
        }
        inline app::GlobalComboDefinition* create() {
            return il2cpp::create_object<app::GlobalComboDefinition>(get_class());
        }
    } // namespace GlobalComboDefinition
} // namespace app::classes::types
