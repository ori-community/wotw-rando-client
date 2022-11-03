#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedLizardEffectsMap {
        namespace {
            inline app::MaterialBasedLizardEffectsMap__Class* type_info_ref = nullptr;
        }
        inline app::MaterialBasedLizardEffectsMap__Class** type_info = &type_info_ref;
        inline app::MaterialBasedLizardEffectsMap__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedLizardEffectsMap__Class>(type_info, "", "MaterialBasedLizardEffectsMap");
        }
        inline app::MaterialBasedLizardEffectsMap* create() {
            return il2cpp::create_object<app::MaterialBasedLizardEffectsMap>(get_class());
        }
    } // namespace MaterialBasedLizardEffectsMap
} // namespace app::classes::types
