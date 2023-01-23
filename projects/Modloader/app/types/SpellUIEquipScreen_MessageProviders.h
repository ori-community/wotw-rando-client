#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpellUIEquipScreen_MessageProviders__Class.h>
#include <Modloader/app/structs/SpellUIEquipScreen_MessageProviders.h>
#include <Modloader/app/structs/SpellUIEquipScreen_MessageProviders__Boxed.h>

namespace app::classes::types {
    namespace SpellUIEquipScreen_MessageProviders {
        namespace {
            inline app::SpellUIEquipScreen_MessageProviders__Class* type_info_ref = nullptr;
        }
        inline app::SpellUIEquipScreen_MessageProviders__Class** type_info = &type_info_ref;
        inline app::SpellUIEquipScreen_MessageProviders__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIEquipScreen_MessageProviders__Class>(type_info, "", "SpellUIEquipScreen", "MessageProviders");
        }
        inline app::SpellUIEquipScreen_MessageProviders* create() {
            return il2cpp::create_object<app::SpellUIEquipScreen_MessageProviders>(get_class());
        }
        inline app::SpellUIEquipScreen_MessageProviders__Boxed* box(app::SpellUIEquipScreen_MessageProviders value) {
            return il2cpp::box_value<app::SpellUIEquipScreen_MessageProviders__Boxed>(get_class(), value);
        }
    } // namespace SpellUIEquipScreen_MessageProviders
} // namespace app::classes::types
