#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpellDescriptionCollection__Class.h>
#include <Modloader/app/structs/SpellDescriptionCollection.h>

namespace app::classes::types {
    namespace SpellDescriptionCollection {
        namespace {
            inline app::SpellDescriptionCollection__Class* type_info_ref = nullptr;
        }
        inline app::SpellDescriptionCollection__Class** type_info = &type_info_ref;
        inline app::SpellDescriptionCollection__Class* get_class() {
            return il2cpp::get_class<app::SpellDescriptionCollection__Class>(type_info, "", "SpellDescriptionCollection");
        }
        inline app::SpellDescriptionCollection* create() {
            return il2cpp::create_object<app::SpellDescriptionCollection>(get_class());
        }
    } // namespace SpellDescriptionCollection
} // namespace app::classes::types
