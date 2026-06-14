#pragma once
#include <Modloader/app/structs/SpellUIEquipScreen_HintsSettings.h>
#include <Modloader/app/structs/SpellUIEquipScreen_HintsSettings__Boxed.h>
#include <Modloader/app/structs/SpellUIEquipScreen_HintsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIEquipScreen_HintsSettings {
        inline app::SpellUIEquipScreen_HintsSettings__Class** type_info() {
            static app::SpellUIEquipScreen_HintsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUIEquipScreen_HintsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUIEquipScreen_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIEquipScreen_HintsSettings__Class>(type_info(), "", "SpellUIEquipScreen", "HintsSettings");
        }
        inline app::SpellUIEquipScreen_HintsSettings* create() {
            return il2cpp::create_object<app::SpellUIEquipScreen_HintsSettings>(get_class());
        }
        inline app::SpellUIEquipScreen_HintsSettings__Boxed* box(app::SpellUIEquipScreen_HintsSettings value) {
            return il2cpp::box_value<app::SpellUIEquipScreen_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace SpellUIEquipScreen_HintsSettings
} // namespace app::classes::types
