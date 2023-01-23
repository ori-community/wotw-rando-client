#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpellUIExperience__Class.h>
#include <Modloader/app/structs/SpellUIExperience.h>

namespace app::classes::types {
    namespace SpellUIExperience {
        namespace {
            inline app::SpellUIExperience__Class* type_info_ref = nullptr;
        }
        inline app::SpellUIExperience__Class** type_info = &type_info_ref;
        inline app::SpellUIExperience__Class* get_class() {
            return il2cpp::get_class<app::SpellUIExperience__Class>(type_info, "", "SpellUIExperience");
        }
        inline app::SpellUIExperience* create() {
            return il2cpp::create_object<app::SpellUIExperience>(get_class());
        }
    } // namespace SpellUIExperience
} // namespace app::classes::types
