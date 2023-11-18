#pragma once
#include <Modloader/app/structs/MaterialBasedLizardEffectsMap.h>
#include <Modloader/app/structs/MaterialBasedLizardEffectsMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedLizardEffectsMap {
        inline app::MaterialBasedLizardEffectsMap__Class** type_info() {
            static app::MaterialBasedLizardEffectsMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialBasedLizardEffectsMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialBasedLizardEffectsMap__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedLizardEffectsMap__Class>(type_info(), "", "MaterialBasedLizardEffectsMap");
        }
        inline app::MaterialBasedLizardEffectsMap* create() {
            return il2cpp::create_object<app::MaterialBasedLizardEffectsMap>(get_class());
        }
    } // namespace MaterialBasedLizardEffectsMap
} // namespace app::classes::types
