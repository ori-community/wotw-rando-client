#pragma once
#include <Modloader/app/structs/SpellUIEquipScreen_MessageProviders.h>
#include <Modloader/app/structs/SpellUIEquipScreen_MessageProviders__Boxed.h>
#include <Modloader/app/structs/SpellUIEquipScreen_MessageProviders__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIEquipScreen_MessageProviders {
        inline app::SpellUIEquipScreen_MessageProviders__Class** type_info() {
            static app::SpellUIEquipScreen_MessageProviders__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUIEquipScreen_MessageProviders__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUIEquipScreen_MessageProviders__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIEquipScreen_MessageProviders__Class>(type_info(), "", "SpellUIEquipScreen", "MessageProviders");
        }
        inline app::SpellUIEquipScreen_MessageProviders* create() {
            return il2cpp::create_object<app::SpellUIEquipScreen_MessageProviders>(get_class());
        }
        inline app::SpellUIEquipScreen_MessageProviders__Boxed* box(app::SpellUIEquipScreen_MessageProviders value) {
            return il2cpp::box_value<app::SpellUIEquipScreen_MessageProviders__Boxed>(get_class(), value);
        }
    } // namespace SpellUIEquipScreen_MessageProviders
} // namespace app::classes::types
